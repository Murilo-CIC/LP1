#include <stdio.h>
#include <stdbool.h>

int global = 100;

int main() {
  int local = global;

  printf("Valor Local %d\n", local);
  return true;
}