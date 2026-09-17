#include <stdio.h>
#include <math.h>

int main()
{
    float h_degrau_cm, h_total_m;
    scanf("%f %f", &h_degrau_cm, &h_total_m);
    float h_total_cm = h_total_m * 100.0;
    int degraus = ceil(h_total_cm / h_degrau_cm);
    printf("Degraus necessários: %d\n", degraus);
    return 0;
}