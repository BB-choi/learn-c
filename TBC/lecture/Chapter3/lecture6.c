#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
   /*  // unsigned int i = 0;
    // unsigned int i = 0b11111111111111111111111111111111; // 최대값 
    unsigned int u_max = UINT_MAX;
    unsigned int u_min = 0;
    signed int i_max = INT_MAX;
    signed int i_min = INT_MIN;
    
    // printf("%d\n", i);
    printf("max of uint = %u\n", u_max);
    printf("min of uint = %u\n", u_min);
    printf("max of int = %d\n", i_max);
    printf("min of int = %d\n", i_min);

    // printf("%u\n", sizeof(unsigned int));
    // printf("%u", sizeof(i));
    // 4 byte이므로 32bit */

    // unsigned int u_max = UINT_MAX + 1;
    // unsigned int u_max = UINT_MAX;

    // 1111+1 = 10000 4비트라면 0000


    unsigned int u_max = 0 - 1;
    // 0000-1 = 1111 (마치 10000-1 인것처럼)


    // printf("%u", u_max); // 0

    // i to binary representation
    char buffer[33];
    _itoa(u_max, buffer, 2);
    
    // print decimal and binary
    printf("decimal: %u\n", u_max);
    printf("binary: %s\n", buffer);

    return 0;
}