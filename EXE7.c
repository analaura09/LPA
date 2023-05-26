#include <stdio.h>

void MaiorMenor(float notas[], int tamanho, float *maior, float *menor);

int main()
{
    float notas[4];
    int i;

    printf("Digite as notas:\n");

    for (i = 0; i < 4; i++)
    {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    float maiorNota, menorNota;
    encontrarMaiorMenor(notas, 4, &maiorNota, &menorNota);

    printf("Maior nota: %.2f\n", maiorNota);
    printf("Menor nota: %.2f\n", menorNota);

    return 0;
}

void encontrarMaiorMenor(float notas[], int tamanho, float *maior, float *menor)
{
    *maior = notas[0];
    *menor = notas[0];

    for (int i = 1; i < tamanho; i++)
    {
        if (notas[i] > *maior)
        {
            *maior = notas[i];
        }

        if (notas[i] < *menor)
        {
            *menor = notas[i];
        }
    }
}