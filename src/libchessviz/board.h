#pragma once
#ifndef BOARD_H
#define BOARD_H
#include <libchessviz/helper.h>

void CleanChessboard(char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD]);
void RefreshChessboard(char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD]);
void PrintChessboard(char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD]);

#endif /* BOARD_H */
