/*
Questão 18. Desenvolva um programa completo em C que declare variáveis de ponto flutuante para os
seguintes itens e seus preços unitários: Lápis (4.88), Borrachas (234.54), Canetas (42.04), Cadernos
(8.00) e Fitas (13.05). Utilize a função printf() para exibir esses dados no console em formato de tabela,
alinhados à direita, com largura mínima de campo de 12 caracteres e precisão de duas casas decimais,
conforme a saída abaixo:
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    const char *itens_nomes[] = {"Lapis", "Borrachas", "Canetas", "Cadernos", "Fitas"};
    const float precos[] = { 4.88, 234.54, 42.04, 8.00, 13.05 };

    int vetor_precos_qtd_itens = sizeof(precos) / 4; // Cada float tem 4 bytes. Dividimos por 4 para saber quantos itens float tem.
    
    float lapis = 4.88;
    float borrachas = 234.54;
    float canetas = 42.04;
    float cadernos = 8.00;
    float fitas = 13.05;

    for(int i = 0; i < vetor_precos_qtd_itens; i++)
    {
        printf("%-12s\t%.2f\n", itens_nomes[i], precos[i]);
    }

    return 0;
}