#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int board[3][3];
  int n = 1;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      board[i][j] = atoi(argv[n]);
      printf("%d ", board[i][j]);
      n++;
    }
    printf("\n");
  }
  return 0;
}
