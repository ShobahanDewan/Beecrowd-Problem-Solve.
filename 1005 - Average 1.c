#include<stdio.h>

int main()
{
   float A,B,MEDIA;
   scanf("%f %f",&A,&B);
   A=A*3.5;
   B=B*7.5;
   MEDIA = (A+B)/11;
   printf("MEDIA = %0.5f\n",MEDIA);
   return 0;
}
