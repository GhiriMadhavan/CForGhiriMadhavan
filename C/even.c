#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = 0;

    printf("The sum of the first %d even natural numbers is: ", n);
    for (int i = 1; i <= n; i++)
     {
            printf("%d",i);
        int evenNumber = 2 * i;
        sum += evenNumber;
    }

    printf("%d\n", sum);


}

