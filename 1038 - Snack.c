#include<stdio.h>
int main()

{
    int x,y;
    float p=0;
    
    scanf("%d %d",&x,&y);
    if(x==1)
    {
        p = (float)(4.00 * y);
    }
    else if(x==2)
    {
        p = (float)(4.50 * y);
    }
    else if(x==3)
    {
        p = (float)(5.00 * y);
    }
    else if(x==4)
    {
        p = (float)(2.00 * y);
    }
    else if(x==5)
    {
        p = (float)(1.50 * y);
    }
    printf("Total: R$ %0.2f\n",p);
    return 0;
}
