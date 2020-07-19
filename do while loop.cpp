#include <iostream>
#include <stdio.h>
int main()
{
    int i;
   printf("enter the value of i\n");
   scanf("%d",&i);
   do
   {
       scanf("%d",&i);
   }
   while(i!=0);

   return 0;
}
