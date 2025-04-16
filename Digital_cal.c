#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    // Input first number
    printf("Enter first no = ");
    scanf("%lf", &num1);

    // Input second number
    printf("Enter 2nd no = ");
    scanf("%lf", &num2);

    // Input operator
    printf("Operation you want (+, -, *, /, %%) = ");
    scanf(" %c", &operator);  // space before %c to catch newline

    // Perform calculation
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result = %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result = %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result = %.2lf\n", result);
            } else {
                printf("Error: Division by zero not allowed.\n");
            }
            break;
        case '%':
            if ((int)num2 != 0) {
                int modResult = (int)num1 % (int)num2;
                printf("Result = %d\n", modResult);
            } else {
                printf("Error: Modulo by zero not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operation.\n");
    }

    return 0;
}