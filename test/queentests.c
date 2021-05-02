#include <libchessviz/board.h>
#include <libchessviz/helper.h>
#include <libchessviz/move.h>

#include <ctest.h>

CTEST(queen_move, white1LU)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 6;
    piece = 4;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_move, black1LU)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 6;
    piece = 4;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_move, white1RU)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 6;
    piece = 4;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_move, black1RU)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 6;
    piece = 4;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_move, white1LD)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 4;
    piece = 4;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_move, black1LD)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 4;
    piece = 4;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_move, white1RD)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 4;
    piece = 4;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_move, black1RD)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 4;
    piece = 4;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_move, white3LU)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 2;
    square2.rank = 8;
    piece = 4;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_move, black3LU)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 2;
    square2.rank = 8;
    piece = 4;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_move, white3RU)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 8;
    square2.rank = 8;
    piece = 4;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_move, black3RU)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 8;
    square2.rank = 8;
    piece = 4;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_move, white3LD)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 2;
    square2.rank = 2;
    piece = 4;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_move, black3LD)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 2;
    square2.rank = 2;
    piece = 4;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_move, white3RD)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 8;
    square2.rank = 2;
    piece = 4;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_move, black3RD)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 8;
    square2.rank = 2;
    piece = 4;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_move, white1U)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 6;
    piece = 4;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_move, black1U)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 6;
    piece = 4;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_move, white1L)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 5;
    piece = 4;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_move, black1L)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 5;
    piece = 4;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_move, white1R)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 5;
    piece = 4;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_move, black1R)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 4;
    piece = 4;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_move, white1D)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 4;
    piece = 4;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_move, black1D)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 4;
    piece = 4;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_move, white3U)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 8;
    piece = 4;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_move, black3U)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 8;
    piece = 4;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_move, white3L)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 2;
    square2.rank = 5;
    piece = 4;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_move, black3L)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 2;
    square2.rank = 5;
    piece = 4;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_move, white3R)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 8;
    square2.rank = 5;
    piece = 4;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_move, black3R)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 8;
    square2.rank = 5;
    piece = 4;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_move, white3D)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 2;
    piece = 4;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_move, black3D)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 2;
    piece = 4;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_NOT_move, white2U1R)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 7;
    piece = 4;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_move, black2U1R)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 7;
    piece = 4;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_move, white2R1U)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 7;
    square2.rank = 6;
    piece = 4;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_move, black2R1U)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 7;
    square2.rank = 6;
    piece = 4;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_move, white2R1D)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 7;
    square2.rank = 4;
    piece = 4;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_move, black2R1D)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 7;
    square2.rank = 4;
    piece = 4;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_move, white2D1R)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 3;
    piece = 4;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_move, black2D1R)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 3;
    piece = 4;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_move, white2D1L)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 3;
    piece = 4;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_move, black2D1L)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 3;
    piece = 4;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_move, white2L1D)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 3;
    square2.rank = 4;
    piece = 4;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_move, black2L1D)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 3;
    square2.rank = 4;
    piece = 4;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_move, white2L1U)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 3;
    square2.rank = 6;
    piece = 4;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_move, black2L1U)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 3;
    square2.rank = 6;
    piece = 4;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_move, white2U1L)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 7;
    piece = 4;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_move, black2U1L)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 7;
    piece = 4;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_move, white2LU_through_other_piece)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 3;
    square2.rank = 7;
    piece = 4;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square1.file - 1][square1.rank + 1] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_move, black2LU_through_other_piece)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 3;
    square2.rank = 7;
    piece = 4;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square1.file - 1][square1.rank + 1] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_move, white2RU_through_other_piece)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 7;
    square2.rank = 7;
    piece = 4;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square1.file + 1][square1.rank + 1] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_move, black2RU_through_other_piece)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 7;
    square2.rank = 7;
    piece = 4;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square1.file + 1][square1.rank + 1] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_move, white2LD_through_other_piece)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 3;
    square2.rank = 3;
    piece = 4;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square1.file - 1][square1.rank - 1] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_move, black2LD_through_other_piece)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 3;
    square2.rank = 3;
    piece = 4;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square1.file - 1][square1.rank - 1] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_move, white2RD_through_other_piece)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 7;
    square2.rank = 3;
    piece = 4;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square1.file + 1][square1.rank - 1] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_move, black2RD_through_other_piece)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 7;
    square2.rank = 3;
    piece = 4;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square1.file + 1][square1.rank - 1] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_move, white2U_through_other_piece)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 7;
    piece = 4;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square1.file][square1.rank + 1] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_move, black2U_through_other_piece)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 7;
    piece = 4;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square1.file][square1.rank + 1] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_move, white2L_through_other_piece)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 3;
    square2.rank = 5;
    piece = 4;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square1.file - 1][square1.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_move, black2L_through_other_piece)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 3;
    square2.rank = 5;
    piece = 4;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square1.file - 1][square1.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_move, white2R_through_other_piece)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 7;
    square2.rank = 5;
    piece = 4;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square1.file + 1][square1.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_move, black2R_through_other_piece)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 7;
    square2.rank = 5;
    piece = 4;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square1.file + 1][square1.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_move, white2D_through_other_piece)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 3;
    piece = 4;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square1.file][square1.rank - 1] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_move, black2D_through_other_piece)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 3;
    piece = 4;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square1.file][square1.rank - 1] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_capture, white1LU)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 6;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_capture, black1LU)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 6;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_capture, white1RU)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 6;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_capture, black1RU)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 6;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_capture, white1RD)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 4;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_capture, black1RD)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 4;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_capture, white1LD)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 4;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_capture, black1LD)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 4;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_capture, white3LU)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 2;
    square2.rank = 8;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_capture, black3LU)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 2;
    square2.rank = 8;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_capture, white3RU)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 8;
    square2.rank = 8;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_capture, black3RU)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 8;
    square2.rank = 8;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_capture, white3RD)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 8;
    square2.rank = 2;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_capture, black3RD)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 8;
    square2.rank = 2;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_capture, white3LD)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 2;
    square2.rank = 2;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_capture, black3LD)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 2;
    square2.rank = 2;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_capture, white1U)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 6;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_capture, black1U)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 6;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_capture, white1L)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 5;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_capture, black1L)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 5;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_capture, white1R)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 5;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_capture, black1R)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 5;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_capture, white1D)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 4;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_capture, black1D)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 4;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_capture, white3U)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 8;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_capture, black3U)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 8;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_capture, white3L)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 2;
    square2.rank = 5;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_capture, black3L)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 2;
    square2.rank = 5;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_capture, white3R)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 8;
    square2.rank = 5;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_capture, black3R)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 8;
    square2.rank = 5;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_capture, white3D)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 2;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_capture, black3D)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 2;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, white1LU)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 6;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, black1LU)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 6;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, white1RU)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 6;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, black1RU)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 6;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, white1RD)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 4;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, black1RD)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 4;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, white1LD)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 4;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, black1LD)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 4;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, white3LU)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 2;
    square2.rank = 8;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, black3LU)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 2;
    square2.rank = 8;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, white3RU)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 8;
    square2.rank = 8;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, black3RU)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 8;
    square2.rank = 8;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, white3RD)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 8;
    square2.rank = 2;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, black3RD)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 8;
    square2.rank = 2;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, white3LD)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 2;
    square2.rank = 2;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, black3LD)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 2;
    square2.rank = 2;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, white1U)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 6;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, black1U)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 6;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, white1L)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 5;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, black1L)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 5;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, white1R)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 5;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, black1R)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 5;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, white1D)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 4;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, black1D)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 4;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, white3U)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 8;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, black3U)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 8;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, white3L)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 2;
    square2.rank = 5;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, black3L)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 2;
    square2.rank = 5;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, white3R)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 8;
    square2.rank = 5;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, black3R)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 8;
    square2.rank = 5;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, white3D)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 2;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, black3D)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 2;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, white2LU_through_other_piece)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 3;
    square2.rank = 7;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square1.file - 1][square1.rank + 1] = 'P';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, black2LU_through_other_piece)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 3;
    square2.rank = 7;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square1.file - 1][square1.rank + 1] = 'p';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, white2RU_through_other_piece)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 7;
    square2.rank = 7;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square1.file + 1][square1.rank + 1] = 'P';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, black2RU_through_other_piece)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 7;
    square2.rank = 7;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square1.file + 1][square1.rank + 1] = 'p';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, white2LD_through_other_piece)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 3;
    square2.rank = 3;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square1.file - 1][square1.rank - 1] = 'P';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, black2LD_through_other_piece)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 3;
    square2.rank = 3;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square1.file - 1][square1.rank - 1] = 'p';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, white2RD_through_other_piece)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 7;
    square2.rank = 3;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square1.file + 1][square1.rank - 1] = 'P';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, black2RD_through_other_piece)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 7;
    square2.rank = 3;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square1.file + 1][square1.rank - 1] = 'p';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, white2U_through_other_piece)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 7;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square1.file][square1.rank + 1] = 'P';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, black2U_through_other_piece)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 7;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square1.file][square1.rank + 1] = 'p';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, white2L_through_other_piece)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 3;
    square2.rank = 5;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square1.file - 1][square1.rank] = 'P';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, black2L_through_other_piece)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 3;
    square2.rank = 5;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square1.file - 1][square1.rank] = 'p';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, white2R_through_other_piece)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 7;
    square2.rank = 5;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square1.file + 1][square1.rank] = 'P';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, black2R_through_other_piece)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 7;
    square2.rank = 5;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square1.file + 1][square1.rank] = 'p';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, white2D_through_other_piece)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 3;
    piece = 4;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'Q';
    Chessboard[square1.file][square1.rank - 1] = 'P';
    Chessboard[square2.file][square2.rank] = 'p';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(queen_NOT_capture, black2D_through_other_piece)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 3;
    piece = 4;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'q';
    Chessboard[square1.file][square1.rank - 1] = 'p';
    Chessboard[square2.file][square2.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}