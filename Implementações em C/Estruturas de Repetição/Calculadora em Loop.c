#include <stdio.h>
#include <stdlib.h>

int main() {
  float num1, num2, resp, novaResp, novoNumero;
  int operacao, cont, novaOperacao;

  do {
    printf("\nDigite o primeiro valor:\n");
    scanf("%f", &num1);
    printf("\n");
    printf("Digite o segundo valor:\n");
    scanf("%f", &num2);
    printf("\n");

    printf("Digite a operacao:\n");
    printf("Adição: 1\n");
    printf("Subtração: 2\n");
    printf("Multiplicação: 3\n");
    printf("Divisão: 4\n");
    printf("\n");
    scanf("%d", &operacao);

    switch (operacao) {
    case 1:
      resp = num1 + num2;
      break;
    case 2:
      resp = num1 - num2;
      break;
    case 3:
      resp = num1 * num2;
      break;
    case 4:
      resp = num1 / num2;
      break;

    default:
      printf("Opção Inválida\n");
    }
    printf("\nResposta: %.2f\n", resp);

    printf("\nDeseja continuar?\n");
    printf("1 para Sim\n");
    printf("2 para Não\n");
    scanf("%d", &cont);

    if (cont == 1) {
      printf("\n1- Nova Operação\n");
      printf("2- Continuar Operção\n");
      scanf("%d", &novaOperacao);
    } else {
      continue;
    }

  } while (cont == 1 && novaOperacao == 1);

  while (cont == 1 && novaOperacao == 2) {
    printf("\n\nDigite o segundo numero: \n");
    scanf("%f", &novoNumero);
    printf("\nDigite a operacao:\n");
    printf("Adição: 1\n");
    printf("Subtração: 2\n");
    printf("Multiplicação: 3\n");
    printf("Divisão: 4\n");
    printf("\n");
    scanf("%d", &operacao);

    switch (operacao) {
    case 1:
      resp = resp + novoNumero;
      break;
    case 2:
      resp = resp - novoNumero;
      break;
    case 3:
      resp = resp * novoNumero;
      break;
    case 4:
      resp = resp / novoNumero;
      break;

    default:
      printf("Opção Inválida\n");
    }
    printf("\nResposta: %.2f\n", resp);

    printf("\nDeseja continuar?\n");
    printf("1 para Sim\n");
    printf("2 para Não\n");
    scanf("%d", &cont);

    if (cont == 1) {
      printf("\n1- Nova Operação\n");
      printf("2- Continuar Operção\n");
      scanf("%d", &novaOperacao);
    } else {
      continue;
    }
  }

  return 0;
}