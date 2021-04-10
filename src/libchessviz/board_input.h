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
int InputMove(
        char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD],
        char MoveOriginal[SIZE_OF_MOVE],
        int turn);
int InputLine(
        char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD],
        char line[SIZE_OF_LINE]);

#endif /* BOARD_INPUT_H */
