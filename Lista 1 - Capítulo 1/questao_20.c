/*
Caracteres gráficos baseados na tabela ASCII estendida (Codepage 437) podem ser
usados para desenhar molduras e caixas de diálogo na tela de modo console. Desenvolva um programa
em C que produza uma moldura simples com exatamente 4 caracteres de largura por 4 de altura.
*/

#include <stdio.h>

int main()
{
    printf("\xC9");
    printf("\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
    printf("\xBA        \xBA\n");
    printf("\xBA        \xBA\n");
    printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
    return 0;
}