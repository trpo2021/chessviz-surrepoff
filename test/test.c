#include <libchessviz/board.h>
#include <libchessviz/helper.h>
#include <libchessviz/move.h>

#include <ctest.h>

CTEST(pawn, move1)
{
    char Chessboard[SIZE_OF_CHESSBOARD][SIZE_OF_CHESSBOARD];
    int piece, turn, movetype, moveend;
    Square square1, square2;
    square1.file = 5;
    square1.rank = 2;
    square2.file = 5;
    square2.rank = 4;
    piece = 0;
    turn = 0;
    movetype = 0;
    moveend = 0;

    CleanChessboard(Chessboard);
    Chessboard[square1.file][square1.rank] = 'P';

    const int result = DoMove(
            Chessboard, square1, square2, piece, turn, movetype, moveend);

    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}