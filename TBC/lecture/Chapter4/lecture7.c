#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    double d = 3.1415926535897932384626433832795028841971693993751058209749445923078164062;

    printf("%c\n", 'A');
    printf("%s", "I love you\n");
    printf("Even if there's a small chance, \
    we owe this to everyone who's not in this room to try.\n"); // 출력시에 줄바꿈 되는 것은 아님

    printf("\n");
    printf("%d %i %i %i\n", 1004, 1234, INT_MAX, UINT_MAX); // Note overflow // 1004 1234 2147483647 -1
    printf("%u %u %u\n", 1024, -1, UINT_MAX);               // Note overflow // 1024 4294967295 4294967295

    printf("\n");
    printf("%f %f %lf\n", 3.141592f, d, d); // l in %lf is ignored // 3.141592 3.141593 3.141593
    // %f가 double을 나타내는 conversion specifier
    printf("%a %A\n", d, d);
    printf("%e %E\n", d, d);

    printf("\n");
    printf("%g %g\n", 123456.789, 1234567.89); // 123457 1.23457e+006
    printf("%G %G\n", 123456.789, 1234567.89);
    printf("%g %g\n", 0.00012345, 0.000012345); // 0.00012345 1.2345e-005
    printf("%G %G\n", 0.00012345, 0.000012345);

    printf("\n");
    printf("%o\n", 9); // 11
    printf("%p\n", &d); // pointer-of operator
    // d변수가 사용하고 있는 메모리의 주소

    printf("\n");
    printf("%x %X\n", 11, 11); // b B
    printf("%%\n", d); // Note the warning. d is ignored.

    printf("\n");
    printf("%9d\n", 12345);         //     12345
    printf("%09d\n", 12345);        // 000012345
    printf("%.2f\n", 3.141592);     // 3.14
    printf("%.20f %.20lf\n", d, d); // 3.14159265358979310000 3.14159265358979310000

    printf("\n");
    int n_printed = printf("Counting!");
    printf("%u\n", n_printed); 
    //Counting!9 :9는  출력한 숫자의 갯수
    // printf() 함수도 return value가 있다.


    return 0;
}