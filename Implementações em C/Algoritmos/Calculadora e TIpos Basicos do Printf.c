#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float num1, num2, respF;
  int op;
  int respI;
  double respD;
  
  printf("Digite o primeiro valor: ");
  scanf("%f", &num1);
  printf("\nDigite o segundo valor: ");
  scanf("%f", &num2);
  printf("\n1 : Adição \n2 : Subtração \n3 : Multiplicação \n4 : Divisão\n\n");
  scanf("%d", &op);

  if (op == 1) {
    respF = num1 + num2;
    respI = respF;
    respD = respF;
    printf("Resultado em Float: %f", respF);
    printf("\nResultado em Int: %d", respI);
    printf("\nResultado em Hexa %x", respI);
    printf("\nResultado em Double: %lf", respD);
  } else if (op == 2) {
    respF = num1 - num2;
    respI = respF;
    respD = respF;
    printf("Resultado em Float: %f", respF);
    printf("\nResultado em Int: %d", respI);
    printf("\nResultado em Hexa %x", respI);
    printf("\nResultado em Double: %lf", respD);
  } else if (op == 3) {
    respF = num1 * num2;
    respI = respF;
    respD = respF;
    printf("Resultado em Float: %f", respF);
    printf("\nResultado em Int: %d", respI);
    printf("\nResultado em Hexa %x", respI);
    printf("\nResultado em Double: %lf", respD);
  } else if (op == 4) {
    respF = num1 / num2;
    respI = respF;
    respD = respF;
    printf("Resultado em Float: %f", respF);
    printf("\nResultado em Int: %d", respI);
    printf("\nResultado em Hexa %x", respI);
    printf("\nResultado em Double: %lf", respD);
  } else {
    printf("\nOperação Inválida:");
  }

  return 0;
}