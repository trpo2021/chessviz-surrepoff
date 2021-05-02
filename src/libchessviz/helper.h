#ifndef HELPER_H
#define HELPER_H

extern const int SIZE_OF_CHESSBOARD;
extern const long long unsigned int SIZE_OF_COMMAND;
extern const long long unsigned int SIZE_OF_LINE;
extern const long long unsigned int SIZE_OF_MOVE;
extern const long long unsigned int SIZE_OF_MOVENUMBER;

enum Errors {
    WRONG_COMMAND = 10,
    WRONG_FLAG,
    WRONG_FILE,
    FILE_NOT_FOUND,
    INCORRECT_MOVE_NUMBER = 100,
    NO_GAP_AFTER_MOVE_NUMBER,
    INCORRECT_PIECE = 200,
    NOT_BLACK_TURN,
    NOT_WHITE_TURN,
    INCORRECT_FIRST_SQUARE,
    INCORRECT_MOVE_TYPE,
    INCORRECT_SECOND_SQUARE,
    INCORRECT_MOVE_END,
    CANT_DO_EN_PASSANT,
    PIECE_NOT_IN_FIRST_SQUARE = 300,
    IMPOSSIBLE_MOVE,
    WRONG_MOVE_TYPE,
    CANT_DO_CASTLING
};

typedef struct Square {
    int file;
    int rank;
} Square;
// file = x, rank = y

void ShiftString(char* string, long long unsigned int step);

#endif /* HELPER_H */
