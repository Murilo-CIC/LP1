#include <stdio.h>
#include <limits.h>

int main(void) {
  printf("Number of bytes: %d\n", sizeof(int));
  printf("INT_MAX: %d\n", INT_MAX);
  printf("INT_MIN: %d\n", INT_MIN);

  printf("Number of bytes: %d\n", sizeof(unsigned int));
  printf("UINT_MAX: %d\n", (unsigned int) UINT_MAX);
  return 0;
}