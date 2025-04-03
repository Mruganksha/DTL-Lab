#include <stdio.h>
#include <math.h>

void calculate(double a, char op, double b) {
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
    printf("Result: %.2lf\n", result);
}

int main() {
    double num1, num2;
    char operator;

    printf("Enter an expression: ");
    scanf("%lf %c %lf", &num1, &operator, &num2);

    calculate(num1, operator, num2);

    return 0;
}
