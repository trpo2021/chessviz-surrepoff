#include <libchessviz/board.h>
#include <libchessviz/helper.h>
#include <libchessviz/move.h>

#include <ctest.h>

CTEST(king_move, white1U)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 6;
    piece = 5;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'K';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(king_move, black1U)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 6;
    piece = 5;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'k';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(king_move, white1U1R)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 6;
    piece = 5;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'K';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(king_move, black1U1R)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 6;
    piece = 5;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'k';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(king_move, white1R)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 5;
    piece = 5;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'K';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(king_move, black1R)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 5;
    piece = 5;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'k';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(king_move, white1D1R)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 4;
    piece = 5;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'K';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(king_move, black1D1R)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 4;
    piece = 5;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'k';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(king_move, white1D)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 4;
    piece = 5;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'K';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(king_move, black1D)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 4;
    piece = 5;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'k';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(king_move, white1D1L)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 4;
    piece = 5;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'K';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(king_move, black1D1L)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 4;
    piece = 5;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'k';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(king_move, white1L)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 5;
    piece = 5;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'K';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(king_move, black1L)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 5;
    piece = 5;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'k';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(king_move, white1U1L)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 6;
    piece = 5;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'K';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(king_move, black1U1L)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 6;
    piece = 5;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'k';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}