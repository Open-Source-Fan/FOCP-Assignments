#include <stdio.h>

int main() {
    int marks[] = {85, 92, 99, 76, 99, 65, 99}; 
    int size = 7; 
    int sum = 0;

    for(int i = 0; i < size; i++) {
        sum += marks[i];
    }

    printf("The sum of all scores is: %d\n", sum);
    return 0;
}
