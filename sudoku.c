#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int board[4][4];
  int seq[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  for(int i = 0; i < 3000; i++) {
    int r = rand() % 9;
    int s = rand() % 9;
    int temp = seq[r];
    seq[r] = seq[s];
    seq[s] = temp;
  }
  int k = 0;
  // llenamos la matriz
  // y suma las filas
  for (int i = 0; i < 4; i++) {
    int sum = 0;
    for (int j = 0; j < 4; j++) {
      if (i != 3 && j != 3) {
        board[i][j] = seq[k++];
        sum += board[i][j];
      }
      else
        board[i][j] = sum;
    }
  }
  // suma de columnas
  for (int i = 0; i < 3; i++) {
    int sum = 0;
    for (int j = 0; j < 4; j++) {
      if (j != 3)
        sum += board[j][i];
      else
        board[j][i] = sum;
    }
  }
  // imprimir la matriz
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%02d ", board[i][j]);
    }
    printf("\n");
  }
  return 0;
}
