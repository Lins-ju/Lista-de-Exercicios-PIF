#include <stdio.h>

int main()
{
    float n1, n2, n3, n4, ms, mp;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    ms = (n1 + n2 + n3 + n4) / 4.0;
    mp = (n1 * 1.0 + n2 * 1.0 + n3 * 2.0 + n4 * 2.0) / 6.0;
    printf("Média Simples: %.2f\n", ms);
    printf("Média Ponderada: %.2f\n", mp);
    return 0;
}