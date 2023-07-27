#include <stdio.h>

int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);



    for (int i = 1; i <= n; i++) {
        int cube = i * i * i;
        printf("%d power 3 : %d\n", i, cube);
    }


}

