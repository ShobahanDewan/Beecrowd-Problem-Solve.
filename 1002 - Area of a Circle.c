#include<stdio.h>
#define pei 3.14159
int main()
{
   double A,R;
   scanf("%lf",&R);
   A = pei * pow(R,2);
   printf("A=%0.4lf\n",A);
   return 0;
}
