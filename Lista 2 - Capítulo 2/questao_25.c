#include <stdio.h>

int main()
{
    float salario_base, salario_liquido;
    scanf("%f", &salario_base);
    salario_liquido = salario_base * 0.98;
    printf("Salário Líquido: R$ %.2f\n", salario_liquido);
    return 0;
}