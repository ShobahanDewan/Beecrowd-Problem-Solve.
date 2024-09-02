#include<stdio.h>
#define pi 3.14159
int main()
{
    double R,V;
    scanf("%lf",&R);
    V = (4/3.0) * pi * pow(R,3);
    printf("VOLUME = %0.3lf\n",V);
    return 0;
}
