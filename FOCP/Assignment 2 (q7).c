#include <stdio.h>

int main() {
    int marks[] = {85, 92, 99, 76, 88, 65}; 
    int size = sizeof(marks) / sizeof(marks[0]);

    for (int i = 0; i < size; i++) {
        if (marks[i] % 2 == 0) {
            printf("Score %d is even\n", marks[i]);
        } else {
            printf("Score %d is odd\n", marks[i]);
        }
    }

    return 0;
}
