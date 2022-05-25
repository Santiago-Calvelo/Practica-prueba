#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  for (int i = 2; n > 1; i++) {
    while (n % i == 0) {
      n = n/i;
      if (n > 1) printf("%dx", i);
      else       printf("%d\n", i);
    }
  }
  return 0;
}
