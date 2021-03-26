#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int N = 9;
const int S = 32;

void RefreshChessboard(char Chessboard[N][N])
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            Chessboard[i][j] = ' ';
    for (i = 1; i < N; i++)
        Chessboard[i][0] = 'a' + i - 1;
    for (j = 1; j < N; j++)
        Chessboard[0][j] = '1' + j - 1;

    for (i = 1; i < N; i++)
        Chessboard[i][2] = 'P';
    Chessboard[1][1] = 'R';
    Chessboard[8][1] = 'R';
    Chessboard[2][1] = 'N';
    Chessboard[7][1] = 'N';
    Chessboard[3][1] = 'B';
    Chessboard[6][1] = 'B';
    Chessboard[4][1] = 'Q';
    Chessboard[5][1] = 'K';

    for (i = 1; i < N; i++)
        Chessboard[i][7] = 'p';
    Chessboard[1][8] = 'r';
    Chessboard[8][8] = 'r';
    Chessboard[2][8] = 'n';
    Chessboard[7][8] = 'n';
    Chessboard[3][8] = 'b';
    Chessboard[6][8] = 'b';
    Chessboard[4][8] = 'q';
    Chessboard[5][8] = 'k';
}

void PrintChessboard(char Chessboard[N][N])
{
    int i, j;
    for (j = 8; j >= 0; j--) {
        for (i = 0; i <= 8; i++) {
            printf("%c ", Chessboard[i][j]);
        }
        printf("\n");
    }
}

int DefineFlag(char flag[S])
{
    int code = 11;

    if (strcmp(flag, "--console") == 0)
        code = 2;
    if (strcmp(flag, "--txt") == 0)
        code = 3;
    if (strcmp(flag, "--html") == 0)
        code = 4;

    return code;
}

void ChangeFlag(int code, int console, int txt, int html)
{
    switch (code) {
    case 2:
        console = 1;
        break;
    case 3:
        txt = 1;
        html = 0;
        break;
    case 4:
        html = 1;
        txt = 0;
        break;
    }
}

int DefineCommand(char command[S])
{
    int length = strlen(command), i, code = 0;

    if (strncmp(command, "chessviz ", 9) != 0) {
        if (strcmp(command, "chessviz") == 0)
            code = 1;
        else
            code = 10;
    }

    if (strncmp(command, "exit", 4) == 0)
        code = -1;

    if (code == 0) {
        for (i = 9; i < length; i++)
            command[i - 9] = command[i];
        for (i = length - 9; i < length; i++)
            command[i] = '\0';
        if ((command[0] == '-') && (command[1] == '-'))
            code = DefineFlag(command);
        else {
            length = strlen(command);
            if (((command[length - 4] != '.') && (command[length - 3] != 't')
                 && (command[length - 2] != 'x')
                 && (command[length - 1] != 't'))
                || (length <= 4))
                code = 12;
        }
    }

    return code;
}

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
    }
}

int main()
{
    FILE* InputFile;
    int code, console = 0, txt = 1, html = 0;
    char Chessboard[N][N], string[S];
    do {
        fgets(string, S, stdin);
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
        if (fgets(string, S, InputFile) == NULL)
            break;
        string[strcspn(string, "\n")] = 0;
        puts(string);
        code = InputLine(Chessboard, string);
        PrintError(code);
        if (code > 0)
            break;
    }

    fclose(InputFile);
    return 0;
}
