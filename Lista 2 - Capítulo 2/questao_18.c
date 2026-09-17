#include <stdio.h>
#define PI 3.141593

int main()
{
    float r, area, vol;
    scanf("%f", &r);
    area = 4.0 * PI * r * r;
    vol = (4.0 / 3.0) * PI * r * r * r;
    printf("Área de Superfície: %.2f\n", area);
    printf("Volume: %.2f\n", vol);
    return 0;
}