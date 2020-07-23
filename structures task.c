#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
struct office
{
    char name[20];
    int id;
    int experience;
    int salary;
};

int main()
{
    int i,n,e,s;
   struct office of[5];
   for(n=0;n<5;n++)
   {
       printf("enter the name of %d employee\n",n+1);
       scanf("%s",&of[n].name);
   }
   for(i=0;i<5;i++)
   {
       printf("enter the id number of %d employee\n",i+1);
       scanf("%d",&of[i].id);
   }
   for(e=0;e<5;e++)
   {
       printf("enter the experience of %d employee\n",e+1);
       scanf("%d",&of[e].experience);
   }
   for(s=0;s<5;s++)
   {
       printf("enter the salary of %d employee\n",s+1);
       scanf("%d",&of[s].salary);
   }
   for(n=0;n<5;n++)
   {
       printf("the name of the %d employee is %s\n",n+1,of[n].name);
   }
   for(i=0;i<5;i++)
   {
       printf("the id of the %d employee is %d\n",i+1,of[i].id);
   }
   for(e=0;e<5;e++)
   {
       printf("the experience of the %d employee is %d\n",e+1,of[e].experience);
   }
   for(s=0;s<5;s++)
   {
       printf("the salary of the %d employee is %d\n",s+1,of[s].salary);
   }

return 0;
}
