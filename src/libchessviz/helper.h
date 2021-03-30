#pragma once

const int N = 9;
const long long unsigned int S = 32;

typedef struct Square {
    int file;
    int rank;
} Square;
// file = x, rank = y

void ShiftString(char* string, long long unsigned int step);
