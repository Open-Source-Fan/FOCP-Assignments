#include <stdio.h>

int subtract(int a, int b) {
    while (b != 0) {
        int borrow = (~a) & b; 
        a = a ^ b;               
        b = borrow << 1;        
    }
    return a;
}

int main() {
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    printf("The result of %d - %d is %d\n", a, b, subtract(a, b));
    return 0;
}
