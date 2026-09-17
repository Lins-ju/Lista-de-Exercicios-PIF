/*
O uso correto de comentários é fundamental para documentar e tornar o código
compreensível. Com base nos tipos de comentários estudados (múltiplas linhas e linha única), escreva
um programa simples em C e documente-o de forma clara. Siga o modelo de formatação de código
ilustrado abaixo:
*/

#define _USE_MATH_DEFINES /* Precisa ser definido para usar constantes da biblioteca math.h 
Precisa ser definido antes do #include <math.h>
*/ 

#include <stdio.h> /* Para instanciar printf */
#include <math.h> /* Para instanciar M_PI que contém a constante Pi*/
#include <stdlib.h> /* Para instanciar função system */


/* 
Este programa printa na tela a constante Pi
*/
int main()
{
    printf("%.4f\n", M_PI); // Printando a constante.
    system("pause"); // Parando sistema até uma tecla ser pressionada.
    return 0; // Fim da aplicação.
}