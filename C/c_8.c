//C = (F - 32) × 5/9
#include<stdio.h>
int num(int f)
{
  return((f-32)*0.55);

}
void main()
{
    int f;
    printf("enter the number=");
    scanf("%d",f);
    printf("%d c=",num(f));
}
