#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  bool win = false;
  // el tablero
  int matriz[15][15];
  // ponemos toda la matriz en 0
  for (int i = 0; i < 15; i++) {
    for (int j = 0; j < 15; j++) {
      matriz[i][j] = 0;
    }
  }
  // posición del caminante
  int x = 7;
  int y = 7;
  // k es el numero de pasos
  int k = 1;
  matriz[x][y] = k;
  for (int i = 0; i < 100; i++) {
    int r = rand() % 4;
    if (r == 0 && matriz[x+1][y] == 0) { x++; k++; }
    if (r == 1 && matriz[x][y+1] == 0) { y++; k++; }
    if (r == 2 && matriz[x-1][y] == 0) { x--; k++; }
    if (r == 3 && matriz[x][y-1] == 0) { y--; k++; }
    matriz[x][y] = k;
    if (x < 0 || y < 0 || x > 14 || y > 14) {
      win = true;
      break;
    }
  }
  // imprimir el tablero
  for (int i = 0; i < 15; i++) {
    for (int j = 0; j < 15; j++) {
      printf("%02d ", matriz[i][j]);
    }
    printf("\n");
  }
  printf("\n%s\n", win ? "ganaste" : "perdiste");
  return 0;
}
