#pragma once
#ifndef HELPER_H
#define HELPER_H

const int SIZE_OF_CHESSBOARD = 9;
const int SIZE_OF_COMMAND = 64;
const int SIZE_OF_LINE = 32;
const int SIZE_OF_MOVE = 16;
const int SIZE_OF_MOVENUMBER = 8;

typedef struct Square {
    int file;
    int rank;
} Square;
// file = x, rank = y

void ShiftString(char* string, long long unsigned int step);

#endif /* HELPER_H */
