#include <stdio.h>

int main() {
    int num, sum = 0, rem, temp;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (num > 0) {
        rem = num % 10; 
        sum += rem * rem * rem; 
        num /= 10;  
    }

    if (sum == temp) 
        printf("%d is an Armstrong number.\n", temp);
    else
        printf("%d is not an Armstrong number.\n", temp);

    return 0;
}
