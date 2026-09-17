/*
Desenvolva três versões independentes de programas em C para produzir no console a
saída de texto abaixo. A primeira versão deve usar uma única chamada de printf(); a segunda deve usar
exatamente duas instruções de impressão independentes; e a terceira deve desenhar as frases
emolduradas utilizando caracteres gráficos de caixa:
*/

#include <stdio.h>

void versao_1()
{
    printf("Treinamento em programacao.\nLinguagem C.\n");
    printf("------\n");
}

void versao_2()
{
    printf("Treinamento em programacao.\n");
    printf("Linguagem C.\n");
    printf("------\n");
}


void versao_3()
{
    printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
    printf("\xBA Treinamento em programacao. \xBA\n");
    printf("\xBA Linguagem C.                \xBA\n");
    printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
}


int main()
{
    versao_1();
    versao_2();
    versao_3();
}