#include<stdio.h>
void main()
{
    int i;
    int j;
    printf("enter the number:");
    scanf("%d",&j);
    for(i=1;i<=10;i++)
    {
        printf("%d",j);
        printf("X");
        printf("%d",i);
        printf("=");
        printf("%d\n",j*i);
    }
}

