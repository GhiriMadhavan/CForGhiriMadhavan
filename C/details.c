#include <stdio.h>
int main() {
    char forename[50];
    char surname[50];
    int year;
    printf("Enter your forename: ");
    scanf("%s", forename);
    printf("Enter your surname: ");
    scanf("%s", surname);
    printf("Enter your year of birth: ");
    scanf("%d", &year);
    printf("Your forename is: %s\n", forename);
    printf("Your surname is: %s\n", surname);
    printf("Your year of birth is: %d\n", year);

    return 0;
}

