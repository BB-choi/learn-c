#include <stdio.h>

int main()
{
    unsigned int decimal = 4294967295;
    unsigned int binary = 0b11111111111111111111111111111111;
    unsigned int oct = 037777777777; // 8진수 앞에 0을 붙인다.
    unsigned int hex = 0xffffffff; // 16진수 x를 붙인다. 1을 32개 해야되는것과 달리 f7개로 된다.(16 = 2^4)

    printf("%u\n", decimal);
    printf("%u\n", binary);
    printf("%u\n", oct);
    printf("%u\n", hex);

    printf("%o %x %#o %#x %#X", decimal, decimal, decimal, decimal, decimal);
    // 37777777777 ffffffff 037777777777 0xffffffff 0XFFFFFFFF
    // # prefix 

    return 0;
}