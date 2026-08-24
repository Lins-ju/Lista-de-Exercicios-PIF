/*
Desenvolva um programa em C que organize dados de notas escolares em uma tabela
no console. Seu programa deve usar especificadores de formato e largura de campos para que as
colunas fiquem perfeitamente alinhadas, gerando a saída mostrada abaixo:
*/

char *alunos[4] = {"ALINE", "MARIO", "SERGIO", "SHIRLEY"};
float notas[4] = {9.0, 10, 4.5, 7.0};

#include <stdio.h>

int main()
{
    int qtd_itens_notas = sizeof(notas) / sizeof(float);

    printf("ALUNO(A)\tNOTA\n");

    printf("\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD \xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\n");

    for(int i = 0; i < qtd_itens_notas; i++)
    {
        printf("%-8s\t", alunos[i]);
        if (notas[i] == 10)
        {
            printf("DEZ\n");
        }
        else
        {
            printf("%.1f\n", notas[i]);
        }

    }
    
    return 0;
}
