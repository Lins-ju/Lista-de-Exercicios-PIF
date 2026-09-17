#include <stdio.h>
#define PI 3.141593

int main()
{
    float r, area, circ;
    scanf("%f", &r);
    area = PI * r * r;
    circ = 2.0 * PI * r;
    printf("Área: %.2f\n", area);
    printf("Circunferência: %.2f\n", circ);
    return 0;
}