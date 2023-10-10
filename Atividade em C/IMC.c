#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opSexo;
    float peso, altura, imc, pesoIdeal, alturaC;

    printf("Informe seu sexo: \n1 - Feminino \n2 - Masculino \n\n");
    scanf("%d", &opSexo);
    printf("\nInforme seu peso: ");
    scanf("%f", &peso);
    printf("Informe sua altura (em metrose e centimetros): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);
    system("cls");

    if (opSexo == 1)
    {
        printf("\nIMC: %.2f", imc);
        alturaC = altura * 100;
        pesoIdeal = (alturaC - 100) - ((alturaC - 100) * 0.15); 

        if (imc < 17.5) {
            printf("Faixa: Abaixo do peso\n");
        } else if (imc >= 19 && imc < 24) {
            printf("Faixa: Normal\n");
        } else if (imc >= 24 && imc < 29) {
            printf("Faixa: Obesidade Leve\n");
        } else if (imc >= 29 && imc < 39) {
            printf("Faixa: Obesidade moderada\n");
        } else if (imc >= 39) {
            printf("Faixa: Obesidade Morbida\n");
        }

        printf("Peso Ideal: %.2f\n", pesoIdeal);
        
    }
    else if (opSexo == 2)
    {
        printf("IMC: %.2f\n", imc);
        alturaC = altura * 100;
        pesoIdeal = (alturaC - 100) - ((alturaC - 100) * 0.1); 

        if (imc < 18.5) {
            printf("Faixa: Abaixo do peso\n");
        } else if (imc >= 18.5 && imc < 25) {
            printf("Faixa: Normal\n");
        } else if (imc >= 25 && imc < 30) {
            printf("Faixa: Obesidade Leve\n");
        } else if (imc >= 30 && imc < 40) {
            printf("Faixa: Obesidade moderada\n");
        } else if (imc >= 40) {
            printf("Faixa: Obesidade Morbida\n");
        }   

        printf("Peso Ideal: %.2f\n", pesoIdeal);

    }
    else
    {
        printf("Opcao invalida\n");
    }

    return 0;
}
