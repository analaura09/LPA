#include <stdio.h>

#define TAMANHO_MATRIZ 6

int main()
{
    int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ];
    int i, j;
    int somaDiagonal = 0;

    printf("Digite os valores da matriz 6x6:\n");

    // Leitura dos valores da matriz
    for (i = 0; i < TAMANHO_MATRIZ; i++)
    {
        for (j = 0; j < TAMANHO_MATRIZ; j++)
        {
            printf("Valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Cálculo da soma dos elementos da diagonal principal
    for (i = 0; i < TAMANHO_MATRIZ; i++)
    {
        somaDiagonal += matriz[i][i];
    }

    printf("\nMatriz 6x6:\n");

    // Exibição dos valores da matriz
    for (i = 0; i < TAMANHO_MATRIZ; i++)
    {
        for (j = 0; j < TAMANHO_MATRIZ; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma dos elementos da diagonal principal: %d\n", somaDiagonal);

    return 0;
}
