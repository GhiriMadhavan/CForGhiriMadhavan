#include <stdio.h>

int Sum(int num1, int num2) {
    int sum = num1 + num2;

    if (sum >= 10 && sum <= 20) {
        return 30;
    } else {
        return sum;
    }
}

int main() {
    int num1, num2;
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    int result = Sum(num1, num2);
    printf("The sum is: %d\n", result);

    return 0;
}

