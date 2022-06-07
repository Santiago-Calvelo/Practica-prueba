#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  int board[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j)
        board[i][j] = 1;
      else
        board[i][j] = 0;
      printf("%d ", board[i][j]);
    }
    printf("\n");
  }
  return 0;
}
