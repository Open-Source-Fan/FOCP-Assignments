#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int marks[] = {85, 92, 99, 76, 99, 65, 99,11, 20};
    int primeCount = 0;

    for (int i = 0; marks[i]; i++) {
        if (isPrime(marks[i])) primeCount++;
    }

    printf("Number of prime numbers: %d\n", primeCount);
    return 0;
}
