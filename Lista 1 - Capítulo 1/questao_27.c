/*
Escreva um programa em C que solicite ao usuário (usando a função scanf()) um valor
inteiro correspondente a um intervalo de tempo em segundos. O programa deve processar esse dado,
calcular e exibir o equivalente formatado em Horas, Minutos e Segundos restantes (Exemplo: 3665
segundos correspondem a 1 hora, 1 minuto e 5 segundos).
*/

#include <stdio.h>

int main()
{
    int in_segundos;
    scanf("%d", &in_segundos);

    int horas = in_segundos / 3600;
    int resto_horas = in_segundos % 3600;
    int minutos = resto_horas / 60;
    int segundos = resto_horas % 60;

    printf("%d hora(s), %d minuto(s) e %d segundos\n", horas, minutos, segundos);
    
    return 0;
}