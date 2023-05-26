#include <stdio.h>

int main()
{
    int tamanho;
    float nota[100], media, notas = 0;

    do
    {
        printf("Digite o tamanho da turma:\n");
        scanf("%d", &tamanho);

        if (tamanho > 100 || tamanho < 0)
        {
            printf("Tamanho de turma invalido!\n");
        }

    } while (tamanho > 100 || tamanho < 0);

    printf("Digite as notas:\n");

    for (int i = 0; i < tamanho; i++)
    {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &nota[i]);
        notas += nota[i];
    }

    media = notas / tamanho;
    printf("A media das notas da turma e: %.2f\n", media);

    return 0;
}