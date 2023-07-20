#include<stdio.h>
int prime(int n)
{
    int bool=1;
    int i;
    for(int i=2;i<=n/2;i++);
    {
      if(n%i==0)
        {
        bool=0;
         break;
        }
    }

if(bool)
{
    printf("%d the number is prime",n);
}
else{
    printf("%d not prime",n);

}
int main()
{
    printf("%d",prime(546));
}
}
