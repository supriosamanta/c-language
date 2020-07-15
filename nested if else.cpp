#include <iostream>
#include <stdio.h>
int main()
{
   int per;
   printf("enter the students percentage\n");
   scanf("%d",&per);
   if(per>80)
   {
       printf("A grade\n");
   }
   else if(per<80 && per>=70)
   {
       printf("B grade\n");
   }
   else if(per<70 && per>=60)
   {
       printf("C grade\n");
   }
   else if(per<60 && per>=50)
   {
       printf("D grade\n");
   }
   else if(per<45)
   {
       printf("FAIL\n");
   }
   return 0;
}
