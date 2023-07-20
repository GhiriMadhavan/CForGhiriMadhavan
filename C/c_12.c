#include<stdio.h>
int age(int year)
{
    return (year+1)-2023;
}
int main()
{
    int year;
    printf("enter your year of birth=");
    scanf("%d",year);
    printf("%d your age is=",age(year));
    getch();
}
