#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, mil, centena, dezena, zero;

    printf("Informe um numero inteiro (de \n");
    scanf("%d", &num);
    zero = num;

    if (num < 0 || num > 9999)
    {
        printf("Numero invalido");
        return 1;
    }

    if (num >= 1000)
    {
        mil = num / 1000;
        switch (mil)
        {
        case 1:
            printf("Mil ");
            break;
        case 2:
            printf("Dois Mil ");
            break;
        case 3:
            printf("Tres Mil ");
            break;
        case 4:
            printf("Quatro Mil ");
            break;
        case 5:
            printf("Cinco Mil ");
            break;
        case 6:
            printf("Seis Mil ");
            break;
        case 7:
            printf("Sete Mil ");
            break;
        case 8:
            printf("Oito Mil ");
            break;
        case 9:
            printf("Nove Mil ");
            break;
        }

        num %= 1000;
    }

    if (num == 100)
    {
        printf("Cem");
    }

    if (num > 100)
    {
        centena = num / 100;
        switch (centena)
        {
        case 1:
            printf("Cento");
            break;
        case 2:
            printf("Duzentos");
            break;
        case 3:
            printf("Trezentos");
            break;
        case 4:
            printf("Quatrocentos");
            break;
        case 5:
            printf("Quinhentos");
            break;
        case 6:
            printf("Seiscentos");
            break;
        case 7:
            printf("Setecentos");
            break;
        case 8:
            printf("Oitocentos");
            break;
        case 9:
            printf("Novecentos");
            break;
        }

        num %= 100;
        if (num > 0)
        {
            printf(" e ");
        }
    }

    if (num >= 20)
    {
        dezena = num / 10;
        switch (dezena)
        {
        case 2:
            printf("Vinte");
            break;
        case 3:
            printf("Trinta");
            break;
        case 4:
            printf("Quarenta");
            break;
        case 5:
            printf("Cinquenta");
            break;
        case 6:
            printf("Sessenta");
            break;
        case 7:
            printf("Setenta");
            break;
        case 8:
            printf("Oitenta");
            break;
        case 9:
            printf("Noventa");
            break;
        }

        num %= 10;
        if (num > 0)
        {
            printf(" e ");
        }
    }

    if (num >= 10 && num <= 19)
    {
        switch (num)
        {
        case 10:
            printf("Dez");
            break;
        case 11:
            printf("Onze");
            break;
        case 12:
            printf("Doze");
            break;
        case 13:
            printf("Treze");
            break;
        case 14:
            printf("Quatorze");
            break;
        case 15:
            printf("Quinze");
            break;
        case 16:
            printf("Dezessei");
            break;
        case 17:
            printf("Dezessete");
            break;
        case 18:
            printf("Dezoito");
            break;
        case 19:
            printf("Dezenove");
            break;
        }
    }
    else if (num >= 0)
    {
        switch (num)
        {
        case 1:
            printf("Um");
            break;
        case 2:
            printf("DOis");
            break;
        case 3:
            printf("Tres");
            break;
        case 4:
            printf("Quatro");
            break;
        case 5:
            printf("Cinco");
            break;
        case 6:
            printf("Seis");
            break;
        case 7:
            printf("Sete");
            break;
        case 8:
            printf("Oito");
            break;
        case 9:
            printf("Nove");
            break;
        }
    }

    if (zero == 0)
    {
        printf("Zero");
    }

    return 0;
}
