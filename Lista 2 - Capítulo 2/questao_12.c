#include <stdio.h>

int main()
{
    int num, ant, suc;
    scanf("%d", &num);
    ant = num;
    --ant;
    suc = num;
    ++suc;
    printf("Antecessor: %d\n", ant);
    printf("Sucessor: %d\n", suc);
    return 0;
}