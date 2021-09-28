#include <stdio.h>
#include <limits.h>

int main()
{
    printf("%10i\n", 1234567);
    printf("%-10i\n", 1234567);
    printf("%+i %+i\n", 123, -123);
    printf("% i \n% i\n", 123, -123);

    printf("%X\n", 17); // 16진수 // 11
    printf("%#X\n", 17); // 0X11

    printf("%05i\n", 123); // 00123
    printf("%*i\n", 7, 456); // 앞의 숫자가 *자리로 들어간다. // %7i -->     456

    printf("\nPrecision\n");
    printf("%.3d\n", 1024); // 1024
    printf("%.5d\n", 1024); // 01024
    printf("%.3f\n", 123456.1234567); // 123456.123
    printf("%.3f\n", 123456.1235); // 123456.124
    printf("%10.3f\n", 123.45678); //   123.457
    printf("%010.3f\n", 123.45678); // 000123.457
    printf("%.5s\n", "ABCDEFGHIJKLMN"); // ABCDE
    printf("%.s\n", "ABCDEFGHIJKLMN"); // assumes.0
    // 숫자 0이 들어있는 것 처럼 처리

    printf("\nLength\n");
    printf("%hhd %hd %d\n", 257, 257, 257); // 1(overflow-> 왜 안되지) 257 257
    printf("%d %lld %lld\n", INT_MAX + 1, INT_MAX + 1, 2147483648LL); // switch to // -2147483648 2147483648 2147483648(x64) // x86, x64 결과 다를 수 있음

    return 0;
}