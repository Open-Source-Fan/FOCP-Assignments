#include <stdio.h>

int main() {
    int marks[] = {85, 92, 99, 76, 88, 65};
    int max = marks[0], min = marks[0];
    
    for (int i = 1; i < sizeof(marks)/sizeof(marks[0]); i++) {
        if (marks[i] > max) max = marks[i];
        if (marks[i] < min) min = marks[i];
    }

    printf("Maximum score: %d\n", max);
    printf("Minimum score: %d\n", min);

    return 0;
}
