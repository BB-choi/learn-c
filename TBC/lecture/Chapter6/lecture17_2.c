#include <stdio.h>

#define SIZE 5

int main()
{

    int numbers[SIZE];
    int sum = 0;
    // int avg = 0;
    int i;

    printf("Enter %d numbers : ", SIZE);

    for (i = 0; i < SIZE; ++i)
        scanf("%d", &numbers[i]); // &(numbers[i])

    for (i = 0; i < SIZE; ++i)
        sum += numbers[i];
    
    // TODO: average
    // avg = sum / SIZE;

    printf("Sum = %d\n", sum);
    // printf("Sum = %d\nAverge = %d\n", sum, avg);


    return 0;
}