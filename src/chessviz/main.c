#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int N = 9;
const int S = 32;

typedef struct Square {
    int file;
    int rank;
} Square;
// file = x, rank = y

int DefineFile(char file)
{
    int code;
    code = -1;
    if ((file - 96 > 0) && (file - 96 < 9))
        code = file - 96;
    return code;
}

int DefineRank(char rank)
{
    int code;
    code = -1;
    if ((rank - 48 > 0) && (rank - 48 < 9))
        code = rank - 48;
    return code;
}

Square DefineSquare(char string[2])
{
    Square square;
    square.file = DefineFile(string[0]);
    square.rank = DefineRank(string[1]);
    return square;
}

void ShiftString(char* string, int step)
{
    int i;
    for (i = 0; i < strlen(string) - (step - 1); i++)
        string[i] = string[i + step];
    for (i = 0; i < step; i++)
        string[strlen(string)] = '\0';
}

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

int DefinePieceChar(int piece, int turn)
{
    int code;
    switch (piece) {
    case 0:
        code = 80;
        break;
    case 1:
        code = 66;
        break;
    case 2:
        code = 78;
        break;
    case 3:
        code = 82;
        break;
    case 4:
        code = 81;
        break;
    case 5:
        code = 75;
        break;
    }
    code += turn * 32;
    return code;
}

int DefinePiece(char piece, int turn)
{
    int code = 200;
    switch (piece) {
    case 80:
        if (!turn)
            code = 0;
        else
            code = 201;
        break;

    case 66:
        if (!turn)
            code = 1;
        else
            code = 201;
        break;

    case 78:
        if (!turn)
            code = 2;
        else
            code = 201;
        break;

    case 82:
        if (!turn)
            code = 3;
        else
            code = 201;
        break;

    case 81:
        if (!turn)
            code = 4;
        else
            code = 201;
        break;

    case 75:
        if (!turn)
            code = 5;
        else
            code = 201;
        break;

    case 112:
        if (turn)
            code = 0;
        else
            code = 202;
        break;

    case 98:
        if (turn)
            code = 1;
        else
            code = 202;
        break;

    case 110:
        if (turn)
            code = 2;
        else
            code = 202;
        break;

    case 114:
        if (turn)
            code = 3;
        else
            code = 202;
        break;

    case 113:
        if (turn)
            code = 4;
        else
            code = 202;
        break;

    case 107:
        if (turn)
            code = 5;
        else
            code = 202;
        break;
    }

    return code;
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

int DefineMoveType(char Move)
{
    int code;
    switch (Move) {
    case 45:
        code = 0;
        break;
    case 120:
        code = 1;
        break;
    default:
        code = 204;
    }
    return code;
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

int CheckCastling(int option, int turn)
{
    return 0;
}

int CheckPieceExistence(
        char Chessboard[N][N], Square square, int piece, int turn)
{
    int code = 300, piecechar;
    piecechar = DefinePieceChar(piece, turn);
    if (Chessboard[square.file][square.rank] == piecechar)
        code = 0;
    return code;
}

int DoMove(
        char Chessboard[N][N],
        Square square1,
        Square square2,
        int piece,
        int turn,
        int movetype,
        int moveend)
{
    int code = 0;
    code = CheckPieceExistence(Chessboard, square1, piece, turn);
    if (code == 0) {
        code = CheckMove(
                Chessboard, square1, square2, piece, turn, movetype, moveend);
        if (code == 0) {
            if ((moveend > 0) && (moveend < 5))
                piece = moveend;
            Chessboard[square1.file][square1.rank] = 32;
            Chessboard[square2.file][square2.rank]
                    = DefinePieceChar(piece, turn);
        }
    }

    printf("\n");
    PrintChessboard(Chessboard);
    return code;
}

int InputMove(char Chessboard[N][N], char MoveOriginal[S / 2], int turn)
{
    Square square1, square2;
    char square[2];
    char Move[S / 2];
    strcpy(Move, MoveOriginal);
    int code = 0, piece = -1, movetype, moveend = 0, i;
    if ((strcmp(Move, "0-0-0") == 0) || (strcmp(Move, "0-0") == 0)) {
        if (strcmp(Move, "0-0-0") == 0)
            code = CheckCastling(1, turn);
        if (strcmp(Move, "0-0") == 0)
            code = CheckCastling(0, turn);
    } else {
        if ((Move[0] >= 97) && (Move[0] <= 104)) {
            piece = 0;

        } else {
            piece = DefinePiece(Move[0], turn);
            if (piece > 5)
                code = piece;

            ShiftString(Move, 1);
        }

        if (code == 0) {
            strncpy(square, Move, 2);
            square1 = DefineSquare(square);
            if ((square1.file == -1) || (square1.rank == -1))
                code = 203;

            if (code == 0) {
                ShiftString(Move, 2);

                movetype = DefineMoveType(Move[0]);
                if (movetype == 204)
                    code = 204;

                if (code == 0) {
                    ShiftString(Move, 1);

                    strncpy(square, Move, 2);
                    square2 = DefineSquare(square);
                    if ((square2.file == -1) || (square2.rank == -1))
                        code = 205;

                    if (code == 0) {
                        if (Move[2] != '\0') {
                            ShiftString(Move, 2);
                            moveend = DefineMoveEnd(Move, piece, turn);
                            if (moveend > 10)
                                code = moveend;
                        }
                        if (code == 0) {
                            code = DoMove(
                                    Chessboard,
                                    square1,
                                    square2,
                                    piece,
                                    turn,
                                    movetype,
                                    moveend);
                        }
                    }
                }
            }
        }
    }

    return code;
}

int InputLine(char Chessboard[N][N], char line[S])
{
    int code = 0, i;
    char MoveNumber[S / 4], WhiteMove[S / 2], BlackMove[S / 2];

    for (i = 0; i < strcspn(line, "."); i++) {
        if (!((line[i] >= 48) && (line[i] <= 57))) {
            code = 100;
            break;
        }
    }

    if (code != 100) {
        strncpy(MoveNumber, line, strcspn(line, ".") + 1);
        for (i = strcspn(line, ".") + 1; i < S / 4; i++)
            MoveNumber[i] = '\0';
    }

    if (code == 0) {
        for (i = 0; i < strlen(line) - strlen(MoveNumber); i++)
            line[i] = line[i + strlen(MoveNumber)];
        for (i = strlen(line) - strlen(MoveNumber); i < strlen(line); i++)
            line[i] = '\0';
        if (line[0] != 32)
            code = 101;

        if (code == 0) {
            ShiftString(line, 1);

            if (strcspn(line, " ") < strlen(line) - 1) {
                strncpy(WhiteMove, line, strcspn(line, " "));
                for (i = strcspn(line, " "); i < S / 2; i++)
                    WhiteMove[i] = '\0';

                for (i = 0; i < strlen(line) - strlen(WhiteMove); i++)
                    line[i] = line[i + strlen(WhiteMove)];
                for (i = strlen(WhiteMove) + 1; i < strlen(line); i++)
                    line[i] = '\0';

                code = InputMove(Chessboard, WhiteMove, 0);

                if (code == 0) {
                    ShiftString(line, 1);

                    strncpy(BlackMove, line, strlen(line));
                    for (i = strlen(line); i < S / 2; i++)
                        BlackMove[i] = '\0';

                    code = InputMove(Chessboard, BlackMove, 1);
                }
            } else {
                strncpy(WhiteMove, line, strlen(line) - 1);
                for (i = strcspn(line, " "); i < S / 2; i++)
                    WhiteMove[i] = '\0';

                code = InputMove(Chessboard, WhiteMove, 0);
            }
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
