#include <stdio.h>

#define NUM_ALUNOS 10
#define NUM_NOTAS 3

// Função para obter a menor nota de um aluno
float obterMenorNota(float notas[], int tamanho)
{
    float menor = notas[0];

    for (int i = 1; i < tamanho; i++)
    {
        if (notas[i] < menor)
        {
            menor = notas[i];
        }
    }

    return menor;
}

int main()
{
    float notas[NUM_ALUNOS][NUM_NOTAS];
    float menorNota;

    printf("Digite as notas dos alunos:\n");

    // Leitura das notas dos alunos
    for (int i = 0; i < NUM_ALUNOS; i++)
    {
        printf("Aluno %d:\n", i + 1);
        for (int j = 0; j < NUM_NOTAS; j++)
        {
            printf("Nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    printf("\nMenor nota de cada aluno:\n");

    // Cálculo e exibição da menor nota de cada aluno
    for (int i = 0; i < NUM_ALUNOS; i++)
    {
        menorNota = obterMenorNota(notas[i], NUM_NOTAS);
        printf("Aluno %d: %.2f\n", i + 1, menorNota);
    }

    return 0;
}
