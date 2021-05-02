#include <libchessviz/board.h>
#include <libchessviz/helper.h>
#include <libchessviz/move.h>

#include <ctest.h>

CTEST(castling, whiteshort)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int turn, option;
    turn = 0;
    option = 0;

    CleanChessboard(Chessboard);
    Chessboard[5][1] = 'K';
    Chessboard[8][1] = 'R';

    const int result = DoCastling(Chessboard, option, turn);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(castling, blackshort)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int turn, option;
    turn = 1;
    option = 0;

    CleanChessboard(Chessboard);
    Chessboard[5][8] = 'k';
    Chessboard[8][8] = 'r';

    const int result = DoCastling(Chessboard, option, turn);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(castling, whitelong)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int turn, option;
    turn = 0;
    option = 1;

    CleanChessboard(Chessboard);
    Chessboard[5][1] = 'K';
    Chessboard[1][1] = 'R';

    const int result = DoCastling(Chessboard, option, turn);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(castling, blacklong)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int turn, option;
    turn = 1;
    option = 1;

    CleanChessboard(Chessboard);
    Chessboard[5][8] = 'k';
    Chessboard[1][8] = 'r';

    const int result = DoCastling(Chessboard, option, turn);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(castling_NOT, whiteshort)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int turn, option;
    turn = 0;
    option = 0;

    RefreshChessboard(Chessboard);

    const int result = DoCastling(Chessboard, option, turn);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(castling_NOT, blackshort)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int turn, option;
    turn = 1;
    option = 0;

    RefreshChessboard(Chessboard);

    const int result = DoCastling(Chessboard, option, turn);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(castling_NOT, whitelong)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int turn, option;
    turn = 0;
    option = 1;

    RefreshChessboard(Chessboard);

    const int result = DoCastling(Chessboard, option, turn);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(castling_NOT, blacklong)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int turn, option;
    turn = 1;
    option = 1;

    RefreshChessboard(Chessboard);

    const int result = DoCastling(Chessboard, option, turn);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}