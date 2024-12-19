#include<stdio.h>
#define pi 3.14159
int main()
{
    double A,B,C,Area1,Area2,Area3,Area4,Area5;
    scanf("%lf %lf %lf",&A,&B,&C);
    printf("TRIANGULO: %0.3lf\n",Area1 = 1/2.0 * A * C);
    printf("CIRCULO: %0.3lf\n",Area2 = pi * pow(C,2));
    
    printf("TRAPEZIO: %0.3lf\n",Area3 = 1/2.0 *(A+B)* C);
    printf("QUADRADO: %0.3lf\n",Area4 = pow(B,2));
    printf("RETANGULO: %0.3lf\n",Area5 = A*B);
    return 0;
}
