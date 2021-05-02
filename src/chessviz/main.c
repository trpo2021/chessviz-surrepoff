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
    case WRONG_COMMAND:
        printf("ERROR : Wrong command\n");
        break;
    case WRONG_FLAG:
        printf("ERROR : Wrong flag\n");
        break;
    case WRONG_FILE:
        printf("ERROR : Wrong input file format (Not .txt)\n");
        break;
    case FILE_NOT_FOUND:
        printf("ERROR : File not found\n");
        break;
    case INCORRECT_MOVE_NUMBER:
        printf("ERROR : Incorrect move number\n");
        break;
    case NO_GAP_AFTER_MOVE_NUMBER:
        printf("ERROR : No gap after move number\n");
        break;
    case INCORRECT_PIECE:
        printf("ERROR : Incorrect piece\n");
        break;
    case NOT_BLACK_TURN:
        printf("ERROR : It's white turn\n");
        break;
    case NOT_WHITE_TURN:
        printf("ERROR : It's black turn\n");
        break;
    case INCORRECT_FIRST_SQUARE:
        printf("ERROR : Incorrect first square\n");
        break;
    case INCORRECT_MOVE_TYPE:
        printf("ERROR : Incorrect move type\n");
        break;
    case INCORRECT_SECOND_SQUARE:
        printf("ERROR : Incorrect second square\n");
        break;
    case INCORRECT_MOVE_END:
        printf("ERROR : Incorrect move end\n");
        break;
    case CANT_DO_EN_PASSANT:
        printf("ERROR : Not pawn can't do en passant\n");
        break;
    case PIECE_NOT_IN_FIRST_SQUARE:
        printf("ERROR : The piece isn't in first square\n");
        break;
    case IMPOSSIBLE_MOVE:
        printf("ERROR : Impossible move\n");
        break;
    case WRONG_MOVE_TYPE:
        printf("ERROR : Actual move type doesn't match given move type\n");
        break;
    case CANT_DO_CASTLING:
        printf("ERROR : Castling isn't possible\n");
        break;
    }
}

int main()
{
    FILE* InputFile;
    int code, console = 0, txt = 0, html = 0;
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD],
            string[SIZE_OF_COMMAND];
    do {
        fgets(string, SIZE_OF_COMMAND, stdin);
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
                code = FILE_NOT_FOUND;
        }
        PrintError(code);
        ChangeFlag(code, console, txt, html);
    } while ((code >= WRONG_COMMAND) || (code == 2) || (code == 3)
             || (code == 4));

    RefreshChessboard(Chessboard);
    PrintChessboard(Chessboard);
    printf("\n");

    while (1) {
        if (fgets(string, SIZE_OF_LINE, InputFile) == NULL)
            break;
        string[strcspn(string, "\n")] = 0;
        printf("\n\n\n   LINE: %s\n", string);
        code = InputLine(Chessboard, string);
        PrintError(code);
        if (code > 0)
            break;
    }

    fclose(InputFile);
    return code;
}
