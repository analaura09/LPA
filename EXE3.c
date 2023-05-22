#include <stdio.h>

int main()
{
    float sal_min, sal_pessoa, qtd_sal;

    printf("Digite o valor do seu salario:");
    scanf("%f", &sal_pessoa);

    printf("Digite o valor do salario minimo:");
    scanf("%f", &sal_min);

    qtd_sal = (sal_pessoa / sal_min);

    printf("Voce recebe um salario de %.2f R$ e recebe %.2f salarios minimos", sal_pessoa, qtd_sal);

    return 0;
}