#include<stdlib.h>
#include<stdio.h>
    int a,b,c,o,p,q,r,s;
int main()
{
    printf("Enter the value of two numbers\n");
    scanf("%d %d",&a,&b);
    printf("enter\n 1-addition\n 2-subtraction\n 3-multiplication\n 4-division\n 5-remainder of division\n");
    printf("enter the operation to be performed\n");
    scanf("%d",&o);
    if(o==1)
    {
        c=a+b;
        printf("the sum of %d and %d is %d",a,b,c);
    }

    else if(o==2)
    {
        p=a-b;
        printf("difference of %d and %d is %d",a,b,p);
    }
    else if(o==3)
    {
        q=a*b;
        printf("the product of %d and %d is %d",a,b,q);
    }
    else if(o==4)
    {
        r=a/b;
        printf("the quotient when %d is divided by %d is %d",a,b,r);
    }
    else if(o==5)
    {
        s=a%b;
        printf("the remainder when %d is divided by %d is %d",a,b,s);
    }
    else
    {
        printf("something is wrong with the program");
    }
    getchar();
    return 0;
}
