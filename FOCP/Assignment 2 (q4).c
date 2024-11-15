#include <stdio.h>

int main() {
    int marks[] = {85, 92, 99, 76, 99, 65, 99}; 
    int size = sizeof(marks);
    int count = 0;

    for(int i = 0; i < size; i++) {
        if(marks[i] == 99) {
            printf("Student %d\n", i+1);
            count++;
        }
    }

    printf("Total students who scored 99: %d\n", count);
    return 0;
}
