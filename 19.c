#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  int m = atoi(argv[2]);

  if (n % m != 0) printf("No se pueden dividir\n");
  else            printf("%d\n", n / m);
  return 0;
}
