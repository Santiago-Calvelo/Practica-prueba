#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  float pinta = 2.00;
  float count = 0.00;
    for (int i = 0; i < n; i++) {
      pinta = pinta / 2;
      count += pinta;
    }
  printf("%.2f\n", count);
  return 0;
}
