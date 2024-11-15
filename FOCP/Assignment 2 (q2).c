#include <stdio.h>

int main() {
    int marks[5] = {85, 92, 74, 56, 66}; // Marks of 5 students
    int i;

    for(i = 0; i < 5; i++) {
        printf("Student %d: Marks = %d, Grade = ", i+1, marks[i]);

        if(marks[i] >= 75) {
            printf("A\n");
        }
        else if(marks[i] >= 60) {
            printf("B\n");
        }
        else if(marks[i] >= 40) {
            printf("C\n");
        }
        else if(marks[i] <= 40) {
            printf("D\n");
        }
        else {
            printf("\n");
        }
    }

    return 0;
}
