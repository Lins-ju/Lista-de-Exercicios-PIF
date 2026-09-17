#include <stdio.h>

int main()
{
    float l, b, h;
    scanf("%f", &l);
    printf("Área do Quadrado: %.2f\n", l * l);
    scanf("%f %f", &b, &h);
    printf("Área do Retângulo: %.2f\n", b * h);
    printf("Área do Triângulo Retângulo: %.2f\n", (b * h) / 2.0);
    return 0;
}