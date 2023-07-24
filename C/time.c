#include<stdio.h>
int time(int a)
{
    return 60/a;
}
int main()
{
    int a=1008;
    printf("%d",&time);
    printf("%d hours");
}
