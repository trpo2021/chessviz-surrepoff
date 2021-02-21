#include <stdio.h>
#include <stdlib.h>
const int N = 9;

void RefreshChessboard(char A[N][N])
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            A[i][j] = ' ';
    for (i = 1; i < N; i++)
        A[i][0] = 'a' + i - 1;
    for (j = 1; j < N; j++)
        A[0][j] = '1' + j - 1;

    for (i = 1; i < N; i++)
        A[i][2] = 'P';
    A[1][1] = 'R';
    A[8][1] = 'R';
    A[2][1] = 'N';
    A[7][1] = 'N';
    A[3][1] = 'B';
    A[6][1] = 'B';
    A[4][1] = 'Q';
    A[5][1] = 'K';

    for (i = 1; i < N; i++)
        A[i][7] = 'p';
    A[1][8] = 'r';
    A[8][8] = 'r';
    A[2][8] = 'n';
    A[7][8] = 'n';
    A[3][8] = 'b';
    A[6][8] = 'b';
    A[4][8] = 'q';
    A[5][8] = 'k';
}

void PrintChessboard(char A[N][N])
{
    int i, j;
    for (j = 8; j >= 0; j--) {
        for (i = 0; i <= 8; i++) {
            printf("%c ", A[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    char A[N][N];
    RefreshChessboard(A);
    PrintChessboard(A);
    return 0;
}
