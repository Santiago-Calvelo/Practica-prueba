#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  // los argumentos
  int n = atoi(argv[1]);
  double p = atof(argv[2]);
  // el tablero
  int a[n+2][n+2];
  // ponemos ceros en los bordes
  for (int i = 0; i < n+2; i++) {
    a[0][i] = 0;
    a[n+1][i] = 0;
    a[i][0] = 0;
    a[i][n+1] = 0;
  }
  // poner minas en el tablero
  for (int i = 1; i < n+1; i++) {
    for (int j = 1; j < n+1; j++) {
      int r = rand() % 100;
      double mina = r/100.0;
      if (mina < p)
        a[i][j] = 9;
      else
        a[i][j] = 0;
    }
  }
  // poner la cantidad de minas alrededor de cada casilla
  for (int i = 0; i < n+2; i++) {
    for (int j = 0; j < n+2; j++) {
      int count = 0;
      if (a[i][j] == 0) {
        if (a[i-1][j-1] == 9) count++;
        if (a[i][j-1] == 9) count++;
        if (a[i+1][j-1] == 9) count++;
        if (a[i+1][j] == 9) count++;
        if (a[i+1][j+1] == 9) count++;
        if (a[i][j+1] == 9) count++;
        if (a[i-1][j+1] == 9) count++;
        if (a[i-1][j] == 9) count++;
        a[i][j] = count;
      }
    }
  }
  // imprimir el tablero
  for (int i = 1; i < n+1; i++) {
    for (int j = 1; j < n+1; j++) {
      if (a[i][j] == 9) printf("* ");
      else              printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  return 0;
}
