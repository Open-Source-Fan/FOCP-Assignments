#include <stdio.h>

int main() {
    int i, j, n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        int num = 1; 
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        for (j = 0; j <= i; j++) {
            printf("%d ", num);
            num = num * (i - j) / (j + 1); 
        }

        printf("\n");
    }

    return 0;
}
