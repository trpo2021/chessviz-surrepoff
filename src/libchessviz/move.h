#pragma once
#include <libchessviz/helper.h>

int DefinePieceCapture(char piece, int turn);
int DefinePieceChar(int piece, int turn);
void RefreshPossibleMoves(int PossibleMoves[N][N]);
void PossibleMovesPawn(
        int PossibleMoves[N][N],
        char Chessboard[N][N],
        Square square,
        int turn,
        int moveend);
void PossibleMovesBishop(
        int PossibleMoves[N][N], char Chessboard[N][N], Square square, int turn);
void PossibleMovesKnight(
        int PossibleMoves[N][N], char Chessboard[N][N], Square square, int turn);
void PossibleMovesRook(
        int PossibleMoves[N][N], char Chessboard[N][N], Square square, int turn);
void PossibleMovesQueen(
        int PossibleMoves[N][N], char Chessboard[N][N], Square square, int turn);
void PossibleMovesKing(
        int PossibleMoves[N][N], char Chessboard[N][N], Square square, int turn);
void FillInPossibleMoves(
        int PossibleMoves[N][N],
        char Chessboard[N][N],
        Square square,
        int piece,
        int turn,
        int moveend);
int CheckPieceExistence(
        char Chessboard[N][N], Square square, int piece, int turn);
int CheckMove(
        char Chessboard[N][N],
        Square square1,
        Square square2,
        int piece,
        int turn,
        int movetype,
        int moveend);
int CheckCastling(int option, int turn);
int DoMove(
        char Chessboard[N][N],
        Square square1,
        Square square2,
        int piece,
        int turn,
        int movetype,
        int moveend);
