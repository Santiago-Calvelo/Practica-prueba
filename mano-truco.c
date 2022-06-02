// TENES QUE ARREGLARLO SALAMIN, LA IDEA ES QUE NO REPITA PEDAZO DE TONTO
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  char * palos[4] = {"Espada","Basto","Copa","Oro"};
  char * numeros[10] = {
    "Ancho",
    "Dos",
    "Tres",
    "Cuatro",
    "Cinco",
    "Seis",
    "Siete",
    "Sota",
    "Caballo",
    "Rey"
  };
  for (int i = 0; i < 3; i++) {
    numeros[i] = numeros[(rand() % 10)];
    palos[i] = palos[(rand() % 4)];
  }
  int ultima_carta = 0;
  for (int i = 0; i < 3; i++) {
    printf("%s de %s ", numeros[ultima_carta], palos[ultima_carta]);
    ultima_carta++;
  }
  printf("\n");
  return 0;
}
