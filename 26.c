#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  while (n >= 0) {
    int square = pow(2, n);
    printf("2 elevado a la %d: %d\n", n, square);
    n--;
  }
  return 0;
}
