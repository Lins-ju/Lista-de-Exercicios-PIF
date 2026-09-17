#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, p, area;
    scanf("%f %f %f", &a, &b, &c);
    p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("Área: %.2f\n", area);
    return 0;
}