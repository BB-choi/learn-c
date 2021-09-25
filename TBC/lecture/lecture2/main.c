#include <stdio.h>

int main()
{
    
    // print formatted 형식을 맞춘다.
    printf("\"The truth is ... \nI am Ironman.\n\"");
    // escape sequence

    int x, y, z;

    x = 1;
    y = 4;

    z = x + y;

    printf("\nThe answer is z.");
    printf("\nThe answer is %i.", 1+4); // integer
    printf("\nThe answer is %d.", z); // decimal (10진수)
    printf("\nThe answer is %i.", z);
    printf("\n%i + %i = %i", x, y, z);
    printf("\a"); // 경고음

    return 0;
}