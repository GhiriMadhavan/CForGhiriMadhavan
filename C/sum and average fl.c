#include <stdio.h>

int main() {
    int n = 10;
    int number;
    int sum = 0;
    float average;

    printf("Enter 10 numbers:\n");


    for (int i = 0; i < n; i++)
        {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &number);
        sum += number;
    }


    average = (float)sum / n;


    printf("\nSum of the numbers is: %d\n", sum);
    printf("Average of the numbers is: %.2f\n", average);


}

