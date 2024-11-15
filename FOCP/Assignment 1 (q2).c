#include<stdio.h>
int hcf(int a, int b) {
    if (b == 0)
        return a;
    else
        return hcf(b, a % b);
}

int main() {
    int a, b, result;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    result = hcf(a, b);
    printf("The HCF of %d and %d is %d\n", a, b, result);
    return 0;
}
