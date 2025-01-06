#include<stdio.h>
int main()
{
    int product_code_1,unit_1,product_code_2,unit_2;
    float price_1,price_2,paid;
    scanf("%d %d %f",&product_code_1,&unit_1,&price_1);
    scanf("\n%d %d %f",&product_code_2,&unit_2,&price_2);
    
    paid=(unit_1*price_1)+(unit_2*price_2);
    printf("VALOR A PAGAR: R$ %0.2f\n",paid);
    return 0;
}
