#include <stdio.h>
int main()
{
    int a, b, c, d, k;
    scanf("%d %d %d %d", &a, &c, &b, &d);
    k = ((b*60)+d) - ((a*60)+c);
    
    if(k<=0) k += 24*60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", k/60, k%60);
    return 0;
}
