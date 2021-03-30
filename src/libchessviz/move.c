#include <stdio.h>

#include <libchessviz/board.h>
#include <libchessviz/helper.h>
#include <libchessviz/move.h>

int DefinePieceCapture(char piece, int turn)
{
    int color, code;

    if (piece > 95)
        color = 1;
    else
        color = 0;

    if (color != turn)
        code = 1;
    else
        code = 0;

    return code;
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

void RefreshPossibleMoves(int PossibleMoves[9][9])
{
    int i, j;
    for (i = 0; i < 9; i++)
        for (j = 0; j < 9; j++)
            PossibleMoves[i][j] = 0;
}

void PossibleMovesPawn(
        int PossibleMoves[9][9],
        char Chessboard[9][9],
        Square square,
        int turn,
        int moveend)
{
    int direction;

    if (turn)
        direction = -1;
    else
        direction = 1;

    if (Chessboard[square.file][square.rank + direction] == 32) {
        PossibleMoves[square.file][square.rank + direction] = 1;
        if (((square.rank == 2) && (!turn)) || ((square.rank == 7) && (turn)))
            if (Chessboard[square.file][square.rank + 2 * direction] == 32)
                PossibleMoves[square.file][square.rank + 2 * direction] = 1;
    }

    if (Chessboard[square.file + direction][square.rank + direction] != 32)
        if (DefinePieceCapture(
                    Chessboard[square.file + direction]
                              [square.rank + direction],
                    turn))
            PossibleMoves[square.file + direction][square.rank + direction] = 2;

    if (Chessboard[square.file - direction][square.rank + direction] != 32)
        if (DefinePieceCapture(
                    Chessboard[square.file - direction]
                              [square.rank + direction],
                    turn))
            PossibleMoves[square.file - direction][square.rank + direction] = 2;

    if (moveend == 7) {
        if (Chessboard[square.file + direction][square.rank + direction] == 32)
            PossibleMoves[square.file + direction][square.rank + direction] = 2;

        if (Chessboard[square.file - direction][square.rank + direction] == 32)
            PossibleMoves[square.file - direction][square.rank + direction] = 2;
    }
}

void PossibleMovesBishop(
        int PossibleMoves[9][9], char Chessboard[9][9], Square square, int turn)
{
    int i;

    i = 0;
    while (1) {
        i++;
        if (Chessboard[square.file + i][square.rank + i] == 32)
            PossibleMoves[square.file + i][square.rank + i] = 1;
        else {
            if (DefinePieceCapture(
                        Chessboard[square.file + i][square.rank + i], turn))
                PossibleMoves[square.file + i][square.rank + i] = 2;
            break;
        }
    }

    i = 0;
    while (1) {
        i++;
        if (Chessboard[square.file - i][square.rank + i] == 32)
            PossibleMoves[square.file - i][square.rank + i] = 1;
        else {
            if (DefinePieceCapture(
                        Chessboard[square.file - i][square.rank + i], turn))
                PossibleMoves[square.file - i][square.rank + i] = 2;
            break;
        }
    }

    i = 0;
    while (1) {
        i++;
        if (Chessboard[square.file + i][square.rank - i] == 32)
            PossibleMoves[square.file + i][square.rank - i] = 1;
        else {
            if (DefinePieceCapture(
                        Chessboard[square.file + i][square.rank - i], turn))
                PossibleMoves[square.file + i][square.rank - i] = 2;
            break;
        }
    }

    i = 0;
    while (1) {
        i++;
        if (Chessboard[square.file - i][square.rank - i] == 32)
            PossibleMoves[square.file - i][square.rank - i] = 1;
        else {
            if (DefinePieceCapture(
                        Chessboard[square.file - i][square.rank - i], turn))
                PossibleMoves[square.file - i][square.rank - i] = 2;
            break;
        }
    }
}

void PossibleMovesKnight(
        int PossibleMoves[9][9], char Chessboard[9][9], Square square, int turn)
{
    if (Chessboard[square.file + 1][square.rank + 2] == 32)
        PossibleMoves[square.file + 1][square.rank + 2] = 1;
    else if (DefinePieceCapture(
                     Chessboard[square.file + 1][square.rank + 2], turn))
        PossibleMoves[square.file + 1][square.rank + 2] = 2;

    if (Chessboard[square.file - 1][square.rank + 2] == 32)
        PossibleMoves[square.file - 1][square.rank + 2] = 1;
    else if (DefinePieceCapture(
                     Chessboard[square.file - 1][square.rank + 2], turn))
        PossibleMoves[square.file - 1][square.rank + 2] = 2;

    if (Chessboard[square.file + 1][square.rank - 2] == 32)
        PossibleMoves[square.file + 1][square.rank - 2] = 1;
    else if (DefinePieceCapture(
                     Chessboard[square.file + 1][square.rank - 2], turn))
        PossibleMoves[square.file + 1][square.rank - 2] = 2;

    if (Chessboard[square.file - 1][square.rank - 2] == 32)
        PossibleMoves[square.file - 1][square.rank - 2] = 1;
    else if (DefinePieceCapture(
                     Chessboard[square.file - 1][square.rank - 2], turn))
        PossibleMoves[square.file - 1][square.rank - 2] = 2;

    if (Chessboard[square.file + 2][square.rank + 1] == 32)
        PossibleMoves[square.file + 2][square.rank + 1] = 1;
    else if (DefinePieceCapture(
                     Chessboard[square.file + 2][square.rank + 1], turn))
        PossibleMoves[square.file + 2][square.rank + 1] = 2;

    if (Chessboard[square.file + 2][square.rank - 1] == 32)
        PossibleMoves[square.file + 2][square.rank - 1] = 1;
    else if (DefinePieceCapture(
                     Chessboard[square.file + 2][square.rank - 1], turn))
        PossibleMoves[square.file + 2][square.rank - 1] = 2;

    if (Chessboard[square.file - 2][square.rank + 1] == 32)
        PossibleMoves[square.file - 2][square.rank + 1] = 1;
    else if (DefinePieceCapture(
                     Chessboard[square.file - 2][square.rank + 1], turn))
        PossibleMoves[square.file - 2][square.rank + 1] = 2;

    if (Chessboard[square.file - 2][square.rank - 1] == 32)
        PossibleMoves[square.file - 2][square.rank - 1] = 1;
    else if (DefinePieceCapture(
                     Chessboard[square.file - 2][square.rank - 1], turn))
        PossibleMoves[square.file - 2][square.rank - 1] = 2;
}

void PossibleMovesRook(
        int PossibleMoves[9][9], char Chessboard[9][9], Square square, int turn)
{
    int i;

    i = 0;
    while (1) {
        i++;
        if (Chessboard[square.file][square.rank + i] == 32)
            PossibleMoves[square.file][square.rank + i] = 1;
        else {
            if (DefinePieceCapture(
                        Chessboard[square.file][square.rank + i], turn))
                PossibleMoves[square.file][square.rank + i] = 2;
            break;
        }
    }

    i = 0;
    while (1) {
        i++;
        if (Chessboard[square.file][square.rank - i] == 32)
            PossibleMoves[square.file][square.rank - i] = 1;
        else {
            if (DefinePieceCapture(
                        Chessboard[square.file][square.rank - i], turn))
                PossibleMoves[square.file][square.rank - i] = 2;
            break;
        }
    }

    i = 0;
    while (1) {
        i++;
        if (Chessboard[square.file + i][square.rank] == 32)
            PossibleMoves[square.file + i][square.rank] = 1;
        else {
            if (DefinePieceCapture(
                        Chessboard[square.file + i][square.rank], turn))
                PossibleMoves[square.file + i][square.rank] = 2;
            break;
        }
    }

    i = 0;
    while (1) {
        i++;
        if (Chessboard[square.file - i][square.rank] == 32)
            PossibleMoves[square.file - i][square.rank] = 1;
        else {
            if (DefinePieceCapture(
                        Chessboard[square.file - i][square.rank], turn))
                PossibleMoves[square.file - i][square.rank] = 2;
            break;
        }
    }
}

void PossibleMovesKing(
        int PossibleMoves[9][9], char Chessboard[9][9], Square square, int turn)
{
    int i;

    for (i = 1; i >= -1; i--) {
        if (Chessboard[square.file + 1][square.rank + i] == 32)
            PossibleMoves[square.file + 1][square.rank + i] = 1;
        else if (DefinePieceCapture(
                         Chessboard[square.file + 1][square.rank + i], turn))
            PossibleMoves[square.file + 1][square.rank + i] = 2;
    }

    for (i = 1; i >= -1; i--) {
        if (Chessboard[square.file - 1][square.rank + i] == 32)
            PossibleMoves[square.file - 1][square.rank + i] = 1;
        else if (DefinePieceCapture(
                         Chessboard[square.file - 1][square.rank + i], turn))
            PossibleMoves[square.file - 1][square.rank + i] = 2;
    }

    if (Chessboard[square.file][square.rank + 1] == 32)
        PossibleMoves[square.file][square.rank + 1] = 1;
    else if (DefinePieceCapture(Chessboard[square.file][square.rank + 1], turn))
        PossibleMoves[square.file][square.rank + 1] = 2;

    if (Chessboard[square.file][square.rank - 1] == 32)
        PossibleMoves[square.file][square.rank - 1] = 1;
    else if (DefinePieceCapture(Chessboard[square.file][square.rank - 1], turn))
        PossibleMoves[square.file][square.rank - 1] = 2;
}

void PossibleMovesQueen(
        int PossibleMoves[9][9], char Chessboard[9][9], Square square, int turn)
{
    PossibleMovesBishop(PossibleMoves, Chessboard, square, turn);
    PossibleMovesRook(PossibleMoves, Chessboard, square, turn);
    PossibleMovesKing(PossibleMoves, Chessboard, square, turn);
}

void FillInPossibleMoves(
        int PossibleMoves[9][9],
        char Chessboard[9][9],
        Square square,
        int piece,
        int turn,
        int moveend)
{
    switch (piece) {
    case 0:
        PossibleMovesPawn(PossibleMoves, Chessboard, square, turn, moveend);
        break;
    case 1:
        PossibleMovesBishop(PossibleMoves, Chessboard, square, turn);
        break;
    case 2:
        PossibleMovesKnight(PossibleMoves, Chessboard, square, turn);
        break;
    case 3:
        PossibleMovesRook(PossibleMoves, Chessboard, square, turn);
        break;
    case 4:
        PossibleMovesQueen(PossibleMoves, Chessboard, square, turn);
        break;
    case 5:
        PossibleMovesKing(PossibleMoves, Chessboard, square, turn);
        break;
    }
}

int CheckPieceExistence(
        char Chessboard[9][9], Square square, int piece, int turn)
{
    int code = 300, piecechar;
    piecechar = DefinePieceChar(piece, turn);
    if (Chessboard[square.file][square.rank] == piecechar)
        code = 0;
    return code;
}

int CheckMove(
        char Chessboard[9][9],
        Square square1,
        Square square2,
        int piece,
        int turn,
        int movetype,
        int moveend)
{
    int code = 301;
    int PossibleMoves[9][9];
    RefreshPossibleMoves(PossibleMoves);
    FillInPossibleMoves(
            PossibleMoves, Chessboard, square1, piece, turn, moveend);
    if (PossibleMoves[square2.file][square2.rank] == 1) {
        if (movetype == 0)
            code = 0;
        else
            code = 302;
    }
    if (PossibleMoves[square2.file][square2.rank] == 2) {
        if (movetype == 1)
            code = 0;
        else
            code = 302;
    }

    return code;
}

/*int CheckCastling(int option, int turn)
{
    return 0;
}*/

int DoMove(
        char Chessboard[9][9],
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
