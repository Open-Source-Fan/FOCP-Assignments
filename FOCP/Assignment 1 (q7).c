#include <stdio.h>

void binaryToDecimal(int binary) {
    int decimal = 0, base = 1, rem;
    while (binary > 0) {
        rem = binary % 10;
        decimal = decimal + rem * base;
        binary = binary / 10;
        base = base * 2;
    }
    printf("Binary to Decimal: %d\n", decimal);
}

void decimalToBinary(int decimal) {
    int binary = 0, rem, base = 1;
    while (decimal > 0) {
        rem = decimal % 2;
        binary = binary + rem * base;
        decimal = decimal / 2;
        base = base * 10;
    }
    printf("Decimal to Binary: %d\n", binary);
}

int main() {
    int choice, number;

    printf("Choose conversion type:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice (1/2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%d", &number);
        binaryToDecimal(number);
    } else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &number);
        decimalToBinary(number);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
