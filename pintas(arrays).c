#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  float pintas[] = {2.00,0.00};
  for (int i = 0; i < n; i++) {
    pintas[0] = pintas[0] / 2;
    pintas[1] += pintas[0];
  }
  printf("%.2f\n", pintas[1]);
  return 0;
}
