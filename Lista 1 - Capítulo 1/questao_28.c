/*
Desenvolva um programa em C que leia três valores numéricos inteiros fornecidos pelo
usuário através do teclado, calcule a média aritmética simples desses valores como um número real de
dupla precisão (double) e exiba o resultado final na tela formatado com exatamente duas casas
decimais.
*/

#include <stdio.h>

int main()
{
    double num1, num2, num3;

    printf("----DIGITE TRES NUMEROS FRACIONAIS (SEPARADOS POR .)----\n");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    printf("%.2lf\n", num1);
    printf("%.2lf\n", num2);
    printf("%.2lf\n", num3);

    return 0;
}