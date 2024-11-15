#include <stdio.h>
#include <math.h> 
int main() {
    int choice;
    double num1, num2, result;

    printf("Simple Calculator\n");
    printf("===================\n");
    printf("Select an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Logarithm (base 10)\n");
    printf("6. Square Root\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            // Addition
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;

        case 2:
            // Subtraction
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;

        case 3:
            // Multiplication
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;

        case 4:
            // Division
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        case 5:
            // Logarithmic value (base 10)
            printf("Enter a number: ");
            scanf("%lf", &num1);
            if (num1 > 0) {
                result = log10(num1);
                printf("Logarithm (base 10) of %.2lf: %.2lf\n", num1, result);
            } else {
                printf("Error: Logarithm undefined for non-positive numbers.\n");
            }
            break;

        case 6:
            // Square Root
            printf("Enter a number: ");
            scanf("%lf", &num1);
            if (num1 >= 0) {
                result = sqrt(num1);
                printf("Square root of %.2lf: %.2lf\n", num1, result);
            } else {
                printf("Error: Square root undefined for negative numbers.\n");
            }
            break;

       
            printf("Invalid choice! Please select a number between 1 and 6.\n");
    }

    return 0;
}
