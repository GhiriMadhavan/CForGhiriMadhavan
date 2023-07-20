#include<stdio.h>
int simpleintrest(int p,int r,int t)
{
    return (p*r*t)/100;
}
void main()
{
    int p=10000;
    int r=5;
    int t=5;
    printf("simple intrest=");
    printf("%d",simpleintrest(p,r,t));

}
