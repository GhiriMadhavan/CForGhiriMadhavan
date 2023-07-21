#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z, result, max;
    printf("first integer: ");
    scanf("%d", &x);
    printf(" second integer: ");
    scanf("%d", &y);
    printf("third integer: ");
    scanf("%d", &z);
    result=(x+y+abs(x-y))/2;
    max=(result+z+abs(result-z))/2;
    printf("\nMaximum value : %d", max);
	printf("\n");
    return 0;
}

