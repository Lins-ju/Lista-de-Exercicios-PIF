#include <stdio.h>

int main()
{
    char maiuscula, minuscula;
    scanf(" %c", &maiuscula);
    minuscula = maiuscula + 32;
    printf("Letra minúscula: %c\n", minuscula);
    return 0;
}