#include <stdio.h>
#include <math.h>

int main(void) {
    int num1, num2;
    char ch;

    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    printf("Enter your operator (+, -, *, /): ");
    getchar();
    scanf("%c", &ch);

    switch (ch) {
        case '+':
            printf("Sum of %d and %d: %d\n", num1, num2, num1 + num2);
            break;

        case '-':
            printf("Subtraction of %d and %d: %d\n", num1, num2, num1 - num2);
            break;

        case '*':
            printf("Multiplication of %d and %d: %d\n", num1, num2, num1 * num2);
            break;

        case '/':
            if (num2 != 0) {
                printf("Division of %d and %d: %.2f\n",
                       num1, num2, (float)num1 / num2);
            } else {
                printf("Can't divide by 0\n");
            }
            break;

        default:
            printf("Invalid operator\n");
    }

    return 0;
}