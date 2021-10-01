#include <stdio.h>

int main()
{
    int number;

    printf("Input a positive integer : ");
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("Even");
    
    else
        printf("Odd");

    /* // if (number % 2 == 1)
    if (number % 2 != 0)
        printf("Odd"); */
    

    // TODO: print even or odd

    return 0;
}