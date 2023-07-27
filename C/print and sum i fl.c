#include<stdio.h>
void main()
{
    int i;
    int j;
    int sum=0;
    printf("enter the number=");
    scanf("%d",&i);
    for( int j=1;j<=i;j++)
    {
        printf("%d\n",j);
      sum=sum+j;

    }
    printf("the sum :");
    printf("%d",sum);
}
