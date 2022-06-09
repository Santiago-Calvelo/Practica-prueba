#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int a[4][4];
  double count = 0.0;

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      a[i][j] = rand() % 20;
      printf("%d ", a[i][j]);
      count += a[i][j];
    }
    printf("Promedio: %.2f", count/4);
    printf("\n");
    count = 0;
  }
  return 0;
}
