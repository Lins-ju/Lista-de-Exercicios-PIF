#include <stdio.h>
#include <math.h>
int main()
{
    float lado_a, lado_b, hipotenusa;
    scanf("%f %f", &lado_a, &lado_b);
    hipotenusa = sqrt(lado_a * lado_a + lado_b * lado_b);
    printf("Hipotenusa: %.2f\n", hipotenusa);
    return 0;
}