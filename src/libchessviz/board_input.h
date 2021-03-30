#pragma once
#include guard
const int N = 9;
const int S = 32;

typedef struct Square {
    int file;
    int rank;
} Square;
// file = x, rank = y

void ShiftString(char* string, int step);
int DefineFile(char file);
int DefineRank(char rank);
Square DefineSquare(char string[2]);
int DefinePiece(char piece, int turn);
int DefineMoveType(char Move);
int DefineMoveEnd(char* Move, int piece, int turn);
int InputMove(char Chessboard[N][N], char MoveOriginal[S / 2], int turn);
int InputLine(char Chessboard[N][N], char line[S]);
