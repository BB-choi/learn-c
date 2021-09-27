#include <stdio.h>
#include <float.h>

int main()
{
    printf("%u\n", sizeof(float));
    printf("%u\n", sizeof(double));
    printf("%u\n", sizeof(long double));

    float f = 123.456f;
    double d = 123.456;

    float f2 = 123.456; // truncation from 'double' to 'float'
    double d2 = 123.456f; // 더 작은 것을 큰 메모리 안에 넣어서 경고가 뜨지 않음.

    int i = 3;
    float f3 = 3.f; // 3.0f 이 낫다.
    double d3 = 3.; // 3.0 이 낫다.

    float f4 = 1.234e10f; // 1.234E10f

    float f5 = 0x1.1p1; // 16진수 0x.1P1
    double d5 = 1.0625e0;

    printf("%f %F %e %E\n", f, f, f, f);
    printf("%f %F %e %E\n", d, d, d, d);
    printf("%a %A\n", f5, f5);
    printf("%a %A\n", d5, d5);

    return 0;
}