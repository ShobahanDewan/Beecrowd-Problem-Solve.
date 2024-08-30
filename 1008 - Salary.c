#include<stdio.h>

int main()
{
   int num,work_hour;
   float salary_per_hour, total_salary;
   scanf("%d %d %f",&num, &work_hour, &salary_per_hour);
   total_salary = work_hour * salary_per_hour;

   printf("NUMBER = %d\n",num);
   printf("SALARY = U$ %0.2f\n",total_salary);
   return 0;
}
