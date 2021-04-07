#pragma once
#ifndef BOARD_INPUT_H
#define BOARD_INPUT_H
#include <libchessviz/helper.h>

int DefineFile(char file);
int DefineRank(char rank);
Square DefineSquare(char string[2]);
int DefinePiece(char piece);
int DefineMoveType(char Move);
int DefineMoveEnd(char* Move, int piece);
int InputMove(char Chessboard[9][9], char MoveOriginal[16], int turn);
int InputLine(char Chessboard[9][9], char line[32]);

#endif /* BOARD_INPUT_H */
