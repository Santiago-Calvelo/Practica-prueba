#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int n = atoi(argv[1]);
  int m = atoi(argv[2]);
  int arrays[n];

  for (int i = 0; i < n; i++) {
    arrays[i] = (rand() % m) + 1;
    printf("%d ", arrays[i]);
  }
  printf("\n");
  return 0;
}
