#include <stdio.h>

int main() {
    int num, num2;

    // Method-1 (Using a temporary variable)
    printf("Enter two integers: ");
    scanf("%d %d", &num, &num2);
    int temp = num;
    num = num2;
    num2 = temp;
    printf("Method-1: After swapping (using temp): %d %d\n", num, num2);

    // Reset values
    printf("Enter two integers: ");
    scanf("%d %d", &num, &num2);

    // Method-2 (Without using a temporary variable, using addition and subtraction)
    num = num + num2;
    num2 = num - num2;
    num = num - num2;
    printf("Method-2: After swapping (add/sub): %d %d\n", num, num2);

    // Reset values
    printf("Enter two integers: ");
    scanf("%d %d", &num, &num2);

    // Method-3 (Using bitwise XOR operator)
    num = num ^ num2;
    num2 = num ^ num2;
    num = num ^ num2;
    printf("Method-3: After swapping (XOR): %d %d\n", num, num2);

    // Reset values
    printf("Enter two integers: ");
    scanf("%d %d", &num, &num2);

    // Method-4 (Using multiplication and division)
    if (num != 0 && num2 != 0) {
        num = num * num2;
        num2 = num / num2;
        num = num / num2;
        printf("Method-4: After swapping (mul/div): %d %d\n", num, num2);
    } else {
        printf("Method-4: Cannot swap using multiplication and division as one of the numbers is zero.\n");
    }

    return 0;
}
