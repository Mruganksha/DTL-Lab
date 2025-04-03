#include <stdio.h>
#include <math.h>

void calculate_decimal(double a, char op, double b) {
    double result;
    switch (op) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/': 
            if (b != 0) 
                result = a / b; 
            else {
                printf("Error: Division by zero\n");
                return;
            }
            break;
        case '^': result = pow(a, b); break;
        default: 
            printf("Error: Invalid operator\n");
            return;
    }
    printf("Decimal Result: %.2lf\n", result);
}

void calculate_hexadecimal() {
    int num1, num2, result;
    char operator;

    printf("Enter a hexadecimal expression: ");
    scanf("%x %c %x", &num1, &operator, &num2);

    switch (operator) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/': 
            if (num2 != 0) 
                result = num1 / num2; 
            else {
                printf("Error: Division by zero\n");
                return;
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            return;
    }
    printf("Hexadecimal Result: %X\n", result);
}

int main() {
    int choice;
    printf("Choose Calculation Mode:\n1. Decimal\n2. Hexadecimal\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        double num1, num2;
        char operator;
        printf("Enter a decimal expression: ");
        scanf("%lf %c %lf", &num1, &operator, &num2);
        calculate_decimal(num1, operator, num2);
    } else if (choice == 2) {
        calculate_hexadecimal();
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
