#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int N = 9;

void RefreshChessboard(char A[N][N])
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            A[i][j] = ' ';
    for (i = 1; i < N; i++)
        A[i][0] = 'a' + i - 1;
    for (j = 1; j < N; j++)
        A[0][j] = '1' + j - 1;

    for (i = 1; i < N; i++)
        A[i][2] = 'P';
    A[1][1] = 'R';
    A[8][1] = 'R';
    A[2][1] = 'N';
    A[7][1] = 'N';
    A[3][1] = 'B';
    A[6][1] = 'B';
    A[4][1] = 'Q';
    A[5][1] = 'K';

    for (i = 1; i < N; i++)
        A[i][7] = 'p';
    A[1][8] = 'r';
    A[8][8] = 'r';
    A[2][8] = 'n';
    A[7][8] = 'n';
    A[3][8] = 'b';
    A[6][8] = 'b';
    A[4][8] = 'q';
    A[5][8] = 'k';
}

void PrintChessboard(char A[N][N])
{
    int i, j;
    for (j = 8; j >= 0; j--) {
        for (i = 0; i <= 8; i++) {
            printf("%c ", A[i][j]);
        }
        printf("\n");
    }
}

int DefineFlag(char* flag)
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

int DefineCommand(char* command)
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
    int code;
    char A[N][N];
    char* string = (char*)calloc(32, sizeof(char));
    do {
        gets(string);
        code = DefineCommand(string);
        if (code == -1)
            break;
        if (code == 1) {
            string = "stdin.txt";
            code = 0;
        }
        if (code == 0) {
            InputFile = fopen(string, "r");
            if (InputFile == NULL)
                code = 13;
        }
        PrintError(code);
    } while (code >= 10);
    RefreshChessboard(A);
    PrintChessboard(A);
    fclose(InputFile);
    free(string);
    return 0;
}
