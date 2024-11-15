#include <stdio.h>

int main() {
    int marks[5] = {50, 60, 70, 80, 90}; 
    int i;
    for(i = 0; i < 5; i++){
        marks[i] += 5;
        printf("Student %d: %d\n", i+1, marks[i]);
    }

    return 0;
}
