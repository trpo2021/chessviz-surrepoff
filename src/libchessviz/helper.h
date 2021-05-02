#ifndef HELPER_H
#define HELPER_H

extern const int SIZE_OF_CHESSBOARD;
extern const long long unsigned int SIZE_OF_COMMAND;
extern const long long unsigned int SIZE_OF_LINE;
extern const long long unsigned int SIZE_OF_MOVE;
extern const long long unsigned int SIZE_OF_MOVENUMBER;

typedef struct Square {
    int file;
    int rank;
} Square;
// file = x, rank = y

void ShiftString(char* string, long long unsigned int step);

#endif /* HELPER_H */
