#include<stdio.h>
void main()
{
    int a=99;
    int b=99;
    int c=100-a;
    int d=100-b;
    if(c<d)
    {
        printf("%d",a);
    }
    if(c>d)
    {
        printf("%d",d);
    }
    else
    {
        return 0;
    }
}
