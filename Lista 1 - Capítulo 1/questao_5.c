/*
Analise o seguinte trecho de código em C. Sob a perspectiva do padrão ANSI C, o
programa está correto para compilação e execução imediata? Caso negativo, descreva quais elementos
cruciais e diretivas estão faltando no código abaixo:
*/

/*
Este programa não funciona por esses motivos: 

main() -> sem tipo de retorno.
{
printf("Linguagem C");
system("pause");
} -> A função precisa retornar um inteiro. Alguns compiladores aceitam "void", mas "void" numa main viola o padrão ISO do C.
Precisa retornar algo para que o sistema operacional tenha uma resposta do retorno da aplicação.

*/

// VERSÃO CORRETA
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Linguagem C\n");
    system("pause");
    return 0;
}