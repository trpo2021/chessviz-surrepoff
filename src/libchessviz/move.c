#include <stdio.h>

#include <libchessviz/board.h>
#include <libchessviz/helper.h>
#include <libchessviz/move.h>

int CheckSquareBoard(int file, int rank)
{
    int code = 1;
    if (((file >= 1) && (file <= 8)) && ((rank >= 1) && (rank <= 8)))
        code = 0;
    return code;
}

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

void RefreshPossibleMoves(
        int PossibleMoves[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD])
{
    int i, j;
    for (i = 0; i < SIZE_OF_CHESSBOARD; i++)
        for (j = 0; j < SIZE_OF_CHESSBOARD; j++)
            PossibleMoves[i][j] = 0;
}

void PossibleMovesPawn(
        int PossibleMoves[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD],
        char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD],
        Square square,
        int turn,
        int moveend)
{
    int direction;

    if (turn)
        direction = -1;
    else
        direction = 1;

    if ((Chessboard[square.file][square.rank + direction] == 32)
        && (!CheckSquareBoard(square.file, square.rank + direction))) {
        PossibleMoves[square.file][square.rank + direction] = 1;
        if (((square.rank == 2) && (!turn)) || ((square.rank == 7) && (turn)))
            if (Chessboard[square.file][square.rank + 2 * direction] == 32)
                PossibleMoves[square.file][square.rank + 2 * direction] = 1;
    }

    if ((Chessboard[square.file + direction][square.rank + direction] != 32)
        && (!CheckSquareBoard(
                square.file + direction, square.rank + direction)))
        if (DefinePieceCapture(
                    Chessboard[square.file + direction]
                              [square.rank + direction],
                    turn))
            PossibleMoves[square.file + direction][square.rank + direction] = 2;

    if ((Chessboard[square.file - direction][square.rank + direction] != 32)
        && (!CheckSquareBoard(
                square.file - direction, square.rank + direction)))
        if (DefinePieceCapture(
                    Chessboard[square.file - direction]
                              [square.rank + direction],
                    turn))
            PossibleMoves[square.file - direction][square.rank + direction] = 2;

    if (moveend == 7) {
        if ((Chessboard[square.file + direction][square.rank + direction] == 32)
            && (!CheckSquareBoard(
                    square.file + direction, square.rank + direction)))
            PossibleMoves[square.file + direction][square.rank + direction] = 2;

        if ((Chessboard[square.file - direction][square.rank + direction] == 32)
            && (!CheckSquareBoard(
                    square.file - direction, square.rank + direction)))
            PossibleMoves[square.file - direction][square.rank + direction] = 2;
    }
}

void PossibleMovesBishop(
        int PossibleMoves[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD],
        char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD],
        Square square,
        int turn)
{
    int i;

    i = 0;
    while (1) {
        i++;

        if (CheckSquareBoard(square.file + i, square.rank + i))
            break;

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

        if (CheckSquareBoard(square.file - i, square.rank + i))
            break;

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

        if (CheckSquareBoard(square.file + i, square.rank - i))
            break;

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

        if (CheckSquareBoard(square.file - i, square.rank - i))
            break;

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
        int PossibleMoves[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD],
        char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD],
        Square square,
        int turn)
{
    if (!CheckSquareBoard(square.file + 1, square.rank + 2)) {
        if (Chessboard[square.file + 1][square.rank + 2] == 32)
            PossibleMoves[square.file + 1][square.rank + 2] = 1;
        else if (DefinePieceCapture(
                         Chessboard[square.file + 1][square.rank + 2], turn))
            PossibleMoves[square.file + 1][square.rank + 2] = 2;
    }

    if (!CheckSquareBoard(square.file - 1, square.rank + 2)) {
        if (Chessboard[square.file - 1][square.rank + 2] == 32)
            PossibleMoves[square.file - 1][square.rank + 2] = 1;
        else if (DefinePieceCapture(
                         Chessboard[square.file - 1][square.rank + 2], turn))
            PossibleMoves[square.file - 1][square.rank + 2] = 2;
    }

    if (!CheckSquareBoard(square.file + 1, square.rank - 2)) {
        if (Chessboard[square.file + 1][square.rank - 2] == 32)
            PossibleMoves[square.file + 1][square.rank - 2] = 1;
        else if (DefinePieceCapture(
                         Chessboard[square.file + 1][square.rank - 2], turn))
            PossibleMoves[square.file + 1][square.rank - 2] = 2;
    }

    if (!CheckSquareBoard(square.file - 1, square.rank - 2)) {
        if (Chessboard[square.file - 1][square.rank - 2] == 32)
            PossibleMoves[square.file - 1][square.rank - 2] = 1;
        else if (DefinePieceCapture(
                         Chessboard[square.file - 1][square.rank - 2], turn))
            PossibleMoves[square.file - 1][square.rank - 2] = 2;
    }

    if (!CheckSquareBoard(square.file + 2, square.rank + 1)) {
        if (Chessboard[square.file + 2][square.rank + 1] == 32)
            PossibleMoves[square.file + 2][square.rank + 1] = 1;
        else if (DefinePieceCapture(
                         Chessboard[square.file + 2][square.rank + 1], turn))
            PossibleMoves[square.file + 2][square.rank + 1] = 2;
    }

    if (!CheckSquareBoard(square.file + 2, square.rank - 1)) {
        if (Chessboard[square.file + 2][square.rank - 1] == 32)
            PossibleMoves[square.file + 2][square.rank - 1] = 1;
        else if (DefinePieceCapture(
                         Chessboard[square.file + 2][square.rank - 1], turn))
            PossibleMoves[square.file + 2][square.rank - 1] = 2;
    }

    if (!CheckSquareBoard(square.file - 2, square.rank + 1)) {
        if (Chessboard[square.file - 2][square.rank + 1] == 32)
            PossibleMoves[square.file - 2][square.rank + 1] = 1;
        else if (DefinePieceCapture(
                         Chessboard[square.file - 2][square.rank + 1], turn))
            PossibleMoves[square.file - 2][square.rank + 1] = 2;
    }

    if (!CheckSquareBoard(square.file - 2, square.rank - 1)) {
        if (Chessboard[square.file - 2][square.rank - 1] == 32)
            PossibleMoves[square.file - 2][square.rank - 1] = 1;
        else if (DefinePieceCapture(
                         Chessboard[square.file - 2][square.rank - 1], turn))
            PossibleMoves[square.file - 2][square.rank - 1] = 2;
    }
}

void PossibleMovesRook(
        int PossibleMoves[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD],
        char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD],
        Square square,
        int turn)
{
    int i;

    i = 0;
    while (1) {
        i++;

        if (CheckSquareBoard(square.file, square.rank + i))
            break;

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

        if (CheckSquareBoard(square.file, square.rank - i))
            break;

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

        if (CheckSquareBoard(square.file + i, square.rank))
            break;

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

        if (CheckSquareBoard(square.file - i, square.rank))
            break;

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
        int PossibleMoves[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD],
        char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD],
        Square square,
        int turn)
{
    int i;

    for (i = 1; i >= -1; i--) {
        if (!CheckSquareBoard(square.file + 1, square.rank + i)) {
            if (Chessboard[square.file + 1][square.rank + i] == 32)
                PossibleMoves[square.file + 1][square.rank + i] = 1;
            else if (DefinePieceCapture(
                             Chessboard[square.file + 1][square.rank + i],
                             turn))
                PossibleMoves[square.file + 1][square.rank + i] = 2;
        }
    }

    for (i = 1; i >= -1; i--) {
        if (!CheckSquareBoard(square.file - 1, square.rank + i)) {
            if (Chessboard[square.file - 1][square.rank + i] == 32)
                PossibleMoves[square.file - 1][square.rank + i] = 1;
            else if (DefinePieceCapture(
                             Chessboard[square.file - 1][square.rank + i],
                             turn))
                PossibleMoves[square.file - 1][square.rank + i] = 2;
        }
    }

    if (!CheckSquareBoard(square.file, square.rank + 1)) {
        if (Chessboard[square.file][square.rank + 1] == 32)
            PossibleMoves[square.file][square.rank + 1] = 1;
        else if (DefinePieceCapture(
                         Chessboard[square.file][square.rank + 1], turn))
            PossibleMoves[square.file][square.rank + 1] = 2;
    }

    if (!CheckSquareBoard(square.file, square.rank - 1)) {
        if (Chessboard[square.file][square.rank - 1] == 32)
            PossibleMoves[square.file][square.rank - 1] = 1;
        else if (DefinePieceCapture(
                         Chessboard[square.file][square.rank - 1], turn))
            PossibleMoves[square.file][square.rank - 1] = 2;
    }
}

void PossibleMovesQueen(
        int PossibleMoves[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD],
        char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD],
        Square square,
        int turn)
{
    PossibleMovesBishop(PossibleMoves, Chessboard, square, turn);
    PossibleMovesRook(PossibleMoves, Chessboard, square, turn);
    PossibleMovesKing(PossibleMoves, Chessboard, square, turn);
}

void FillInPossibleMoves(
        int PossibleMoves[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD],
        char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD],
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
        char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD],
        Square square,
        int piece,
        int turn)
{
    int code = 300, piecechar;
    piecechar = DefinePieceChar(piece, turn);

    if ((piecechar == DefinePieceChar(piece, 1) && (turn == 0)))
        code = 201;

    if ((piecechar == DefinePieceChar(piece, 0) && (turn == 1)))
        code = 202;

    if (Chessboard[square.file][square.rank] == piecechar)
        code = 0;
    return code;
}

int CheckMove(
        char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD],
        Square square1,
        Square square2,
        int piece,
        int turn,
        int movetype,
        int moveend)
{
    int code = 301;
    int PossibleMoves[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
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

int CheckCastling(
        char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD],
        int option,
        int turn)
{
    int code = 0, r;
    Square square;

    if (!turn)
        r = 1;
    else
        r = 8;

    if (option) {
        square.file = 5;
        square.rank = r;
        code = CheckPieceExistence(Chessboard, square, 5, turn);
        if (code == 0) {
            square.file = 1;
            square.rank = r;
            code = CheckPieceExistence(Chessboard, square, 3, turn);
            if (code == 0) {
                if ((Chessboard[2][r] != 32) || (Chessboard[3][r] != 32)
                    || (Chessboard[4][r] != 32)) {
                    code = 303;
                }
            }
        }
    } else {
        square.file = 5;
        square.rank = r;
        code = CheckPieceExistence(Chessboard, square, 5, turn);
        if (code == 0) {
            square.file = 8;
            square.rank = r;
            code = CheckPieceExistence(Chessboard, square, 3, turn);
            if (code == 0) {
                if ((Chessboard[6][r] != 32) || (Chessboard[7][r] != 32)) {
                    code = 303;
                }
            }
        }
    }

    return code;
}

int DoCastling(
        char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD],
        int option,
        int turn)
{
    int code, r;
    code = CheckCastling(Chessboard, option, turn);

    if (code == 0) {
        if (!turn)
            r = 1;
        else
            r = 8;

        if (option) {
            Chessboard[1][r] = 32;
            Chessboard[2][r] = 32;
            Chessboard[3][r] = DefinePieceChar(5, turn);
            Chessboard[4][r] = DefinePieceChar(3, turn);
            Chessboard[5][r] = 32;
        } else {
            Chessboard[5][r] = 32;
            Chessboard[6][r] = DefinePieceChar(3, turn);
            Chessboard[7][r] = DefinePieceChar(5, turn);
            Chessboard[8][r] = 32;
        }
    }

    return code;
}

int DoMove(
        char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD],
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

    PrintChessboard(Chessboard);
    return code;
}
