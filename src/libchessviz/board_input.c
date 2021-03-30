#include <string.h>
#include "board_input.h"
const int N = 9;
const int S = 32;

typedef struct Square {
    int file;
    int rank;
} Square;
// file = x, rank = y

void ShiftString(char* string, int step)
{
    int i;
    for (i = 0; i < strlen(string) - (step - 1); i++)
        string[i] = string[i + step];
    for (i = 0; i < step; i++)
        string[strlen(string)] = '\0';
}

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

int DefineMoveEnd(char* Move, int piece, int turn)
{
    int code = 206;
    if (strcmp(Move, "+") == 0) {
        code = 5;
    }
    if (strcmp(Move, "#") == 0) {
        code = 6;
    }
    if (strcmp(Move, "e.p.") == 0) {
        if (piece == 0) {
            code = 7;
        }
        code = 207;
    }
    if (strlen(Move) == 1) {
        if ((DefinePiece(Move[0], turn) > 0)
            && (DefinePiece(Move[0], turn) < 5))
            code = DefinePiece(Move[0], turn);
    }
    return code;
}

int InputMove(char Chessboard[N][N], char MoveOriginal[S / 2], int turn)
{
    Square square1, square2;
    char square[2];
    char Move[S / 2];
    strcpy(Move, MoveOriginal);
    int code = 0, piece = -1, movetype, moveend = 0;
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
