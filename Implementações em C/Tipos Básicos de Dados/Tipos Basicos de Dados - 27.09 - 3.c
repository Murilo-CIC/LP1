#include <stdio.h>
#include <stdbool.h>

int main() {
  bool t;
  t = true;

  if (t) {
    printf("Verdadeiro %d\n", t);
  } else {
    printf("Falo %d\n", t);
  }
  return 0;
}