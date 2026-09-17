/*
Faça um programa em C que declare uma variável de ponto flutuante de precisão simples
(float), atribua a ela um valor constante real de sua preferência (como o valor do número de Euler 'e' =
2.71828) e exiba o resultado no console formatado com exatamente três casas decimais de precisão.
*/

#include <stdio.h>

void main()
{
    float flutuante_pi = 3.14159;
    printf("Pi (3 casas decimais) = %.3f\n", flutuante_pi);

    return 0;
}