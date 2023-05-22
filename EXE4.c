#include <stdio.h>

int main()
{
    int N1, N2, N3, N4, soma;

    scanf("%d", &N1);
    scanf("%d", &N2);
    scanf("%d", &N3);
    scanf("%d", &N4);

    if (N1 > N2 > N3 > N4)
    {
        soma = (N2 + N3 + N4);
        printf("A soma dos 3 menores numeros e: %d", soma);
    }
    else if (N2 > N3 > N4 > N1)
    {
        soma = (N3 + N4 + N1);
        printf("A soma dos 3 menores numeros e: %d", soma);
    }
    else if (N3 > N4 > N2 > N1)
    {
        soma = (N4 + N2 + N1);
        printf("A soma dos 3 menores numeros e: %d", soma);
    }
    else if (N4 > N1 > N2 > N3)
    {
        soma = (N1 + N2 + N3);
        printf("A soma dos 3 menores numeros e: %d", soma);
    }

    return 0;
}