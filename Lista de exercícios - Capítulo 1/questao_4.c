/*
Um estudante iniciante de programação em C escreveu o programa abaixo e encontrou
diversos erros que impedem a sua compilação. Analise o código atentamente, aponte cada um dos
erros presentes e escreva a versão corrigida e funcional desse programa:
*/

/*
    #include <stdio.h>
    #include <stdlib.h>; -> include não precisa de ; depois de declarar a biblioteca
    int Main{} -> Linguagem C é case sensitive e "main" é começa com letra minuscula | {} não se usa no início de funções e sim ()
    ( -> aqui que seriam as {}
    printf( Existem %d semanas no ano.,52); -> o texto a ser printado precisa estar dentro de ""
    cout << endl; -> essa estrutura existe no c++, não em c
    system("PAUSE");
    return 0;
    )
*/

// VERSÃO CORRIGIDA

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Existem %d semanas no ano.\n", 52);
    system("PAUSE");
    return 0;
}