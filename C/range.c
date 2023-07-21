                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          #include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);


    if ((num1 >= 100 && num1 <= 200) || (num2 >= 100 && num2 <= 200)) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}

