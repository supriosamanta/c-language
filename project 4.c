#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char random(int n)
{
    srand(time(0));
    return rand()% n;
}
int main()
{
    char try[]={'r','p','s'};
    char com,ans;
    int temp;
    printf("r=Rock! p=paper! s=scissor!\n");
    printf("enter you choice\n");
    scanf("%c",&com);
    temp=random(3)+1;
    ans=try[temp-1];
    printf("the computer choose %c\n",ans);
    if(ans==com)
    {
        printf("It's a draw\n");
    }
    else if(ans>com)
    {
        printf("computer wins\n");
    }
    else
    {
        printf("you win\n");
    }
    return 0;
}
