#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int n = atoi(argv[1]);
  int suma = 0;
  int a[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      a[i][j] = rand() % 10;
      printf("%d\t", a[i][j]);
      if (i == j) {
        suma += a[i][j];
      }
    }
    printf("\n");
  }
  printf("Traza: %d\n", suma);
  return 0;
}
