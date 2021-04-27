#include <libchessviz/board.h>
#include <libchessviz/helper.h>
#include <libchessviz/move.h>

#include <ctest.h>

CTEST(knight_move, white2U1L)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 7;
    piece = 2;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'N';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(knight_move, black2U1L)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 7;
    piece = 2;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'n';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(knight_move, white2U1R)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 7;
    piece = 2;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'N';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(knight_move, black2U1R)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 7;
    piece = 2;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'n';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(knight_move, white2L1U)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 3;
    square2.rank = 6;
    piece = 2;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'N';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(knight_move, black2L1U)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 3;
    square2.rank = 6;
    piece = 2;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'n';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(knight_move, white2L1D)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 3;
    square2.rank = 4;
    piece = 2;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'N';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(knight_move, black2L1D)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 3;
    square2.rank = 4;
    piece = 2;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'n';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(knight_move, white2R1U)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 7;
    square2.rank = 6;
    piece = 2;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'N';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(knight_move, black2R1U)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 7;
    square2.rank = 6;
    piece = 2;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'n';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(knight_move, white2R1D)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 7;
    square2.rank = 4;
    piece = 2;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'N';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(knight_move, black2R1D)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 7;
    square2.rank = 4;
    piece = 2;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'n';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(knight_move, white2D1L)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 3;
    piece = 2;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'N';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(knight_move, black2D1L)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 3;
    piece = 2;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'n';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(knight_move, white2D1R)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 3;
    piece = 2;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'N';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(knight_move, black2D1R)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 3;
    piece = 2;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'n';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(knight_NOT_move, white2U)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 7;
    piece = 2;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'N';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(knight_NOT_move, black2U)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 7;
    piece = 2;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'n';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(knight_NOT_move, white2L)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 3;
    square2.rank = 5;
    piece = 2;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'N';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(knight_NOT_move, black2L)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 3;
    square2.rank = 5;
    piece = 2;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'n';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(knight_NOT_move, white2R)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 7;
    square2.rank = 5;
    piece = 2;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'N';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(knight_NOT_move, black2R)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 7;
    square2.rank = 5;
    piece = 2;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'n';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(knight_NOT_move, white2D)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 3;
    piece = 2;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'N';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(knight_NOT_move, black2D)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 5;
    square2.rank = 3;
    piece = 2;
    turn = 1;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'n';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_NOT_EQUAL(expected, result);
}

CTEST(knight_capture, white2U1L)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 7;
    piece = 2;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'N';
    Chessboard[square2.file][square2.rank] = 'n';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(knight_capture, black2U1L)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 7;
    piece = 2;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'n';
    Chessboard[square2.file][square2.rank] = 'N';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(knight_capture, white2U1R)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 7;
    piece = 2;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'N';
    Chessboard[square2.file][square2.rank] = 'n';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(knight_capture, black2U1R)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 7;
    piece = 2;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'n';
    Chessboard[square2.file][square2.rank] = 'N';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(knight_capture, white2L1U)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 3;
    square2.rank = 6;
    piece = 2;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'N';
    Chessboard[square2.file][square2.rank] = 'n';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(knight_capture, black2L1U)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 3;
    square2.rank = 6;
    piece = 2;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'n';
    Chessboard[square2.file][square2.rank] = 'N';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(knight_capture, white2L1D)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 3;
    square2.rank = 4;
    piece = 2;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'N';
    Chessboard[square2.file][square2.rank] = 'n';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(knight_capture, black2L1D)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 3;
    square2.rank = 4;
    piece = 2;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'n';
    Chessboard[square2.file][square2.rank] = 'N';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(knight_capture, white2R1U)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 7;
    square2.rank = 6;
    piece = 2;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'N';
    Chessboard[square2.file][square2.rank] = 'n';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(knight_capture, black2R1U)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 7;
    square2.rank = 6;
    piece = 2;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'n';
    Chessboard[square2.file][square2.rank] = 'N';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(knight_capture, white2R1D)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 7;
    square2.rank = 4;
    piece = 2;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'N';
    Chessboard[square2.file][square2.rank] = 'n';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(knight_capture, black2R1D)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 7;
    square2.rank = 4;
    piece = 2;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'n';
    Chessboard[square2.file][square2.rank] = 'N';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(knight_capture, white2D1L)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 3;
    piece = 2;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'N';
    Chessboard[square2.file][square2.rank] = 'n';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(knight_capture, black2D1L)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 4;
    square2.rank = 3;
    piece = 2;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'n';
    Chessboard[square2.file][square2.rank] = 'N';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(knight_capture, white2D1R)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 3;
    piece = 2;
    turn = 0;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'N';
    Chessboard[square2.file][square2.rank] = 'n';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(knight_capture, black2D1R)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 5;
    square2.file = 6;
    square2.rank = 3;
    piece = 2;
    turn = 1;
    movetype = 1;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'n';
    Chessboard[square2.file][square2.rank] = 'N';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}