#include <stdio.h>

int main()
{
    char nome[24];
    float N1, N2, N3, media;

    printf("Digite seu nome:");
    scanf("%s", nome);

    printf("Digite a PRIMEIRA nota:");
    scanf("%f", &N1);
    printf("Digite a SEGUNDA nota:");
    scanf("%f", &N2);
    printf("Digite a TERCEIRA nota:");
    scanf("%f", &N3);

    media = (N1 + N2 + N3) / 3;
    if (media >= 7)
    {
        printf("aprovado(a)\n");
    }
    else
    {
        printf("reprovado(a)\n");
    }

    printf("A media de %s e de %.2f", nome, media);

    return 0;
}