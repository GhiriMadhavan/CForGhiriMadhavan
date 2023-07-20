#include<stdio.h>
int area(int l,int b)
{
    return l*b;
}
void main()
{
    int l=3;
    int b=3;
    printf(" the area of rectangle is=");
    printf("%d unitsq",area(l,b));
}
