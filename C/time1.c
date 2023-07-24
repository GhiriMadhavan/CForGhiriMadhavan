#include<stdio.h>
void main()
{
    int a=60;
    int b=a/60;
    printf("%d",b);
    if(b==1)
    {
        printf(" hour");
    }
    else
    {
        printf(" hours");
    }
}
