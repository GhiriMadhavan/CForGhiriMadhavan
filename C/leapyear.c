#include<stdio.h>
void main()
{
    int year=2006;
    if(year%4==0)
    {
        printf("%d",year);
        printf(" is a leap year");
    }
    else
    {
        printf("%d",year);
        printf(" not a leap year");
    }
}
