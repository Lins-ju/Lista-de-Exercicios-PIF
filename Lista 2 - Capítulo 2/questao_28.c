#include <stdio.h>

int main()
{
    float h_normais, h_extras;
    scanf("%f %f", &h_normais, &h_extras);
    float bruto = (h_normais * 10.0) + (h_extras * 15.0);
    float excedente = (bruto > 12000.0) ? (bruto - 12000.0) : 0.0;
    float imposto = excedente * 0.10;
    printf("Salário Anual Bruto: R$ %.2f\n", bruto);
    printf("Imposto Devido: R$ %.2f\n", imposto);
    return 0;
}