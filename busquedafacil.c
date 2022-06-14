#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char *busqueda = argv[1];
  char *palabras[] = {
    "albarez",
    "farfan",
    "grassi",
    "cavalcanti",
    "lesta"
  };
  for (int i = 0; i < 5; i++) {
    if (strcmp(palabras[i] == busqueda) == 0) {
      printf("%d\n", i);
      return 0;
    }
  }
  printf("-1\n");
  return 1;
}
