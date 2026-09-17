#include <stdio.h>

int main()
{
    int h, m, s, duracao;
    scanf("%d %d %d", &h, &m, &s);
    scanf("%d", &duracao);
    int total_seg = (h * 3600 + m * 60 + s + duracao) % 86400;
    int h_fim = total_seg / 3600;
    int m_fim = (total_seg % 3600) / 60;
    int s_fim = total_seg % 60;
    printf("Término: %02d:%02d:%02d\n", h_fim, m_fim, s_fim);
    return 0;
}