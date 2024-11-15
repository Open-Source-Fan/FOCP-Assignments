#include <stdio.h>
#include <math.h> 
int main() {
    int num, a , remainder, result = 0, n = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    a = num;
    while (a != 0) {
        a /= 10;
        n++;
    }

    a = num;
    while (a != 0) {
        remainder = a % 10;
        result += pow(remainder, n);
        a /= 10;
    }
    
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
