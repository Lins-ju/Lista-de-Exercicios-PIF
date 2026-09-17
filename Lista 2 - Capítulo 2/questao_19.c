#include <stdio.h>

int main()
{
    int dias;
    float bruto, liquido;
    scanf("%d", &dias);
    bruto = dias * 30.0;
    liquido = bruto * (1.0 - 0.08);
    printf("Valor Bruto: R$ %.2f\n", bruto);
    printf("Valor Líquido: R$ %.2f\n", liquido);
    return 0;
}