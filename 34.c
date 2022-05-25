#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {
  int n = atoi(argv[0]);
  bool primo = true;
  for (int i = 0; i < n; i++) {
    if (n % i == 0) primo = false;
    if (primo == true) printf("El numero es primo\n");
    else               printf("El numero no es primo\n");
  }

  return 0;
}
