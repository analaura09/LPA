#include <stdio.h>

void encontrarMaiorMenor(int vetor[], int tamanho, int *maior, int *menor)
{
    *maior = vetor[0];
    *menor = vetor[0];

    int i;

    for (i = 0; i < tamanho; i++)
    {
        if (vetor[i] > *maior)
        {
            *maior = vetor[i];
        }

        if (vetor[i] < *menor)
        {
            *menor = vetor[i];
        }
    }
}

int main()
{
    int vetor[5];
    int maior, menor;

    printf("Digite 5 numeros:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vetor[i]);
    }

    encontrarMaiorMenor(vetor, 5, &maior, &menor);

    printf("O maior elemento da lista: %d\n", maior);
    printf("O menor elemento da lista: %d\n", menor);

    return 0;
}
