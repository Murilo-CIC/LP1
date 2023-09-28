#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salarioBruto, salarioLiquido, imposto, valeAlimentacao;
    float salarioMinimo = 1320.0;

    printf("Informe o valor do salario bruto: ");
    scanf("%f", &salarioBruto);
    printf("Informe o valor do vale alimentacao: ");
    scanf("%f", &valeAlimentacao);

    imposto = 0.075 * salarioBruto;

    salarioLiquido = (salarioBruto - imposto) + valeAlimentacao;

    if (salarioLiquido < salarioMinimo)
    {
        salarioLiquido = salarioMinimo;
        printf("O salario liquido foi ajustado para o salario minimo de %.2f\n", salarioMinimo);
    }
    else
    {
        printf("O salario liquido e: %.2f\n", salarioLiquido);
    }

    return 0;
}