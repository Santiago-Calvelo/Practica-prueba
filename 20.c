#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  if (a > b) printf("La variable b debe ser mayor a la variable a\n");

  for (int i = a; i <= b; i++) {
    if (i % 3 == 0) printf("%d ", i);
  }
  printf("\n");
  return 0;
}
