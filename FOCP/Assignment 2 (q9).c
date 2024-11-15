#include <stdio.h>

int main()
{
    int marks[5] = {50, 60, 45, 35, 25};
    int i;
    for (i = 0; i < 5; i++)
    {
        if (marks[i] > marks[i + 1] && marks[i] > marks[i - 1])
        {
            printf("The peak is %d\n", marks[i]);
        }
    }
    return 0;