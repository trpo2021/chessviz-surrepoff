#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <libchessviz/board.h>
#include <libchessviz/board_input.h>
#include <libchessviz/command.h>
#include <libchessviz/helper.h>
#include <libchessviz/move.h>

void PrintError(int code)
{
    switch (code) {
    case 10:
        printf("ERROR : Wrong command\n");
        break;
    case 11:
        printf("ERROR : Wrong flag\n");
        break;
    case 12:
        printf("ERROR : Wrong input file format (Not .txt)\n");
        break;
    case 13:
        printf("ERROR : File not found\n");
        break;
    case 100:
        printf("ERROR : Incorrect move number\n");
        break;
    case 101:
        printf("ERROR : No gap after move number\n");
        break;
    case 200:
        printf("ERROR : Incorrect piece\n");
        break;
    case 201:
        printf("ERROR : It's white turn\n");
        break;
    case 202:
        printf("ERROR : It's black turn\n");
        break;
    case 203:
        printf("ERROR : Incorrect first square\n");
        break;
    case 204:
        printf("ERROR : Incorrect move type\n");
        break;
    case 205:
        printf("ERROR : Incorrect second square\n");
        break;
    case 206:
        printf("ERROR : Incorrect move end\n");
        break;
    case 207:
        printf("ERROR : Not pawn can't do en passant\n");
        break;
    case 300:
        printf("ERROR : The piece isn't in first square\n");
        break;
    case 301:
        printf("ERROR : Impossible move\n");
        break;
    case 302:
        printf("ERROR : Actual move type doesn't match given move type\n");
        break;
    }
}

int main()
{
    FILE* InputFile;
    int code, console = 0, txt = 0, html = 0;
    char Chessboard[9][9], string[64];
    do {
        fgets(string, 64, stdin);
        string[strcspn(string, "\n")] = 0;
        code = DefineCommand(string);
        if (code == -1)
            break;
        if (code == 1) {
            strcpy(string, "stdin.txt");
            code = 0;
        }
        if (code == 0) {
            InputFile = fopen(string, "r");
            if (InputFile == NULL)
                code = 13;
        }
        PrintError(code);
        ChangeFlag(code, console, txt, html);
    } while ((code >= 10) || (code == 2) || (code == 3) || (code == 4));

    RefreshChessboard(Chessboard);
    PrintChessboard(Chessboard);
    printf("\n\n\n");

    while (1) {
        if (fgets(string, 32, InputFile) == NULL)
            break;
        string[strcspn(string, "\n")] = 0;
        puts(string);
        code = InputLine(Chessboard, string);
        PrintError(code);
        if (code > 0)
            break;
    }

    fclose(InputFile);
    return code;
}
