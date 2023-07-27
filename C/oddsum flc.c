#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = 0;

    printf("The first %d odd natural numbers are:\n", n);
    for (int i = 1; i <= n; i++) {
        int oddNumber = 2 * i - 1;
        sum += oddNumber;
        printf("%d ", oddNumber);
    }

    printf("\nSum : %d\n", n, sum);

    return 0;
}

