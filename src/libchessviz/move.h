#pragma once
#ifndef MOVE_H
#define MOVE_H
#include <libchessviz/helper.h>

int DefinePieceCapture(char piece, int turn);
int DefinePieceChar(int piece, int turn);
void RefreshPossibleMoves(int PossibleMoves[9][9]);
void PossibleMovesPawn(
        int PossibleMoves[9][9],
        char Chessboard[9][9],
        Square square,
        int turn,
        int moveend);
void PossibleMovesBishop(
        int PossibleMoves[9][9], char Chessboard[9][9], Square square, int turn);
void PossibleMovesKnight(
        int PossibleMoves[9][9], char Chessboard[9][9], Square square, int turn);
void PossibleMovesRook(
        int PossibleMoves[9][9], char Chessboard[9][9], Square square, int turn);
void PossibleMovesQueen(
        int PossibleMoves[9][9], char Chessboard[9][9], Square square, int turn);
void PossibleMovesKing(
        int PossibleMoves[9][9], char Chessboard[9][9], Square square, int turn);
void FillInPossibleMoves(
        int PossibleMoves[9][9],
        char Chessboard[9][9],
        Square square,
        int piece,
        int turn,
        int moveend);
int CheckPieceExistence(
        char Chessboard[9][9], Square square, int piece, int turn);
int CheckMove(
        char Chessboard[9][9],
        Square square1,
        Square square2,
        int piece,
        int turn,
        int movetype,
        int moveend);
int CheckCastling(int option, int turn);
int DoMove(
        char Chessboard[9][9],
        Square square1,
        Square square2,
        int piece,
        int turn,
        int movetype,
        int moveend);
        
#endif /* MOVE_H */
