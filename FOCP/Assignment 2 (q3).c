#include <stdio.h>

int main() {
    int marks[] = {85, 92, 99, 76, 99, 65}; 
    int size = sizeof(marks);
    for(int i = 0; i < size; i++) {
        if(marks[i] == 99) {
            printf("First student who scored 99 is Student %d \n", i+1);
            return 0; }
    }

    printf("No student scored 99.\n");
    return 0;
}
