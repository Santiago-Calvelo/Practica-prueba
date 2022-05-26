#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  for (int i = 0; i < n; i++) {
    if (n % i == 0) { 
      printf("El numero no es primo\n");
      return 1;
     }
    else {             
      printf("El numero es primo\n");
      return 1;
     }
  }

  return 0;
}
