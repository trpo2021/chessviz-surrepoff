#pragma once
#include <libchessviz/helper.h>

int DefineFile(char file);
int DefineRank(char rank);
Square DefineSquare(char string[2]);
int DefinePiece(char piece, int turn);
int DefineMoveType(char Move);
int DefineMoveEnd(char* Move, int piece, int turn);
int InputMove(char Chessboard[N][N], char MoveOriginal[S / 2], int turn);
int InputLine(char Chessboard[N][N], char line[S]);
