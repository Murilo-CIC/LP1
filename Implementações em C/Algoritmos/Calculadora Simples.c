#include <stdio.h>
#include <stdlib.h>

int main() {
  float num1, num2;
  float soma, div, sub, mult;

  printf("Digite o primeiro número: \n");
  scanf("%f", &num1);
  printf("Digite o segundo número: \n");
  scanf("%f", &num2);

  soma = num1 + num2;
  sub = num1 - num2;
  mult = num1 * num2;

  printf("Soma: %.2f\n", soma);
  printf("Subtração: %.2f\n", sub);
  printf("Multiplicação? %.2f\n", mult);

    if (num2 == 0) {
    printf("Segundo número nao pode ser 0\n");
  } else {
    div = num1 / num2;
      printf("Divisão: %.2f", div);
  }
return 0;
}