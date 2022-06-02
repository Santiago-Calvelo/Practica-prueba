#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int n = atoi(argv[1]);
  int m = atoi(argv[2]);
  int arrays[n];
  int max = INT_MIN;
  int min = INT_MAX;
  double cont = 0.0;

  for (int i = 0; i < n; i++) {
    arrays[i] = rand() % m;
    cont += arrays[i];
    if (arrays[i] < min) min = arrays[i];
    else if (arrays[i] > max) max = arrays[i];
    printf("%d ", arrays[i]);
  }
  printf("\n");
  printf("Max:%d\n", max);
  printf("Min:%d\n", min);
  printf("Prom:%.2f\n", cont / n);
  return 0;
}
