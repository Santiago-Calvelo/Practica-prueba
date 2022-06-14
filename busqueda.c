#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char *busqueda = argv[1];
  char *palabras[] = {
    "albarez",
    "farfan",
    "grassi",
    "cavalcanti",
    "lesta"
  };
  for (int i = 0; i < 5; i++) {
    int j = 0;
    while (busqueda[j] != 0) {
      if (busqueda[j] != palabras[i][j]) break;
      j++;
    }
    if (busqueda[j] == 0 && palabras[i][j] == 0) {
      printf("%d\n", i);
      return 0;
    }
  }
  printf("-1\n");
  return 1;
}
