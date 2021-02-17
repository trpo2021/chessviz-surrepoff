#include <stdio.h>
#include <stdlib.h>
char A[9][9];
int i,j;

void PrintChessboard(){
  for (j=8;j>=0;j--){
    for (i=0;i<=8;i++){
      printf("%c ",A[i][j]);
    }
    printf("\n");
  }
}

int main()
{

return 0;
}
