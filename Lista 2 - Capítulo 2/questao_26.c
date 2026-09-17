#include <stdio.h>

int main() {
    float comp, larg, preco_metro;
    scanf("%f %f", &comp, &larg);
    scanf("%f", &preco_metro);
    float metro_arame = 3.0 * (2.0 * (comp + larg));
    float custo_total = metro_arame * preco_metro;
    printf("Metros de arame necessários: %.2f m\n", metro_arame);
    printf("Custo total: R$ %.2f\n", custo_total);
    return 0;
}