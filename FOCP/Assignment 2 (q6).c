#include <stdio.h>

int main() {
    int marks[] = {85, 92, 99, 76, 99, 65, 99};  
    int size = sizeof(marks) / sizeof(marks[0]), sum = 0;
    
    for(int i = 0; i < size; i++) sum += marks[i];

    printf("Average score: %.2f\n", (float)sum / size);
    
    return 0;
}
