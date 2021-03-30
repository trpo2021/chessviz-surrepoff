#pragma once
#ifndef HELPER_H
#define HELPER_H

typedef struct Square {
    int file;
    int rank;
} Square;
// file = x, rank = y

void ShiftString(char* string, long long unsigned int step);

#endif /* HELPER_H */
