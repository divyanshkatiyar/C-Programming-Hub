#include <stdio.h>

int main() {
    char op;
    double num1, num2, result;
    
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);  // Note the space before %c to ignore any newline

    switch(op) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2lf", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2lf", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2lf", result);
            break;

        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                printf("Result = %.2lf", result);
            } else {
                printf("Error: Division by zero");
            }
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}
