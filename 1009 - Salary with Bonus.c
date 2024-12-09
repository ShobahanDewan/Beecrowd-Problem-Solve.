#include<stdio.h>
int main()
{
    char First_Name[50];
    double fixed_salary ,total_sales,total_salary;
    scanf("%s",&First_Name);
    scanf("%lf
 %lf",&fixed_salary,&total_sales); 
    total_salary = (total_sales*0.15)+fixed_salary;
    printf("TOTAL = R$ %0.2lf\n",total_salary);
    return 0;
}
