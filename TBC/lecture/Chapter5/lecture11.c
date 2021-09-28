#include <stdio.h>

int main()
{
    /* promotions in assignments */
    short s = 64;
    int i = s;

    float f = 3.14f;
    double d = f;

    /* demotion in assignments */
    d = 1.25;
    // 데이터 크기가 큰 자료형을 크기가 작은 자료형에 넣는것 : demotion
    f = 1.25; // double
    // warning이 안 뜸 -> 1.25는 double, float 모두 문제 없다.
    // f = 1.123; // 절삭 오류가 생긴다.
    f = 1.123f; // 오류가 생기지 않는다.
    // warning : truncation(절삭) from 'double' to 'float'

    /* ranking of types in operations */
    // long double > double > float
    // unsigned long long , long long
    // unsigned long, long
    // unsigned, int
    // short int, unsigned short int
    // signed char, char, unsigned char
    // _Bool
    // Ref: Google 'Integer conversion rank'
    d = f + 1.234;
    // f + 1.234 는 double. f를 double로 변환하여 계산
    f = f + 1.234; // warning

    /* automatic promotion of function arguments */
    // 1. Functions without prototypes
    // 2. Variadic functions (ellipsis) 인자가 달라지는 경우

    /* casting operators */
    // 형변환 할 것이라고 의도적으로 표현 (프로그래머)
    d = (double)3.14f;
    i = 1.6 + 1.7; // 실수 + 실수 = 3.3 -> integer : 절삭 -> 3
    i = (int)1.6 + (int)1.7; // 1(truncation) + 1 => 2

    /* more examples */
    char c;
    // int i;
    // float f;

    f = i = c = 'A'; //65
    // int to flat conversion warning
    printf("%c %d %f\n", c, i, f);
    c = c + 2; // 'C', 67
    i = f + 2 * c; // 65.0f + 2 * 67
    // 2 * c를 float로 변환하여 f + 2 * c를 계산하고 int에 넣음. truncation
    printf("%c %d %f\n", c, i, f); // C 199 65.00000
    c = 1106; // demolition, 1106 = 0b10001010010, 0b01010010 = 1106 % 256 = 82 = 'R'
    // 메모리 부족. overflow
    printf("%c\n", c);
    c = 83.99; // 절삭 -> 83 -> S
    printf("%c\n", c);


    return 0;
}