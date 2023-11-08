#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0, resultado = 0;

    printf("Digite um numero maior que zero: ");
    scanf("%d", &num);

    if (num >= 0)
    {
        for (int i = 1; i <= num; i++)
        {
            resultado += i;
            printf("%d\n", resultado);
        }
    }
    else
    {
        printf("Numero invalido");
    }

    return 0;
}