#include <stdio.h>

int main()
{
    printf("Integer divisions\n");
    // 기본적으로는 반올림하지 않는다.
    printf("%d\n", 14 / 7);
    printf("%d\n", 7 / 2); // 3.5 floating division => 3 (정수 나누기 정수, 0.5부분을 절삭함) truncation
    printf("%d\n", 7 / 3); // 2.333 in floating division
    printf("%d\n", 7 / 4); // 1.75 in floating division
    printf("%d\n", 8 / 4); // 2

    printf("Truncating toward zero (C99)\n"); // 0에 가까운 쪽으로 절삭을 해 버린다.
    printf("%d\n", -7 / 2); // -3.5 in floating division
    printf("%d\n", -7 / 3); // -2.333 in floating division
    printf("%d\n", -7 / 4); // -1.75 in floating division
    printf("%d\n", -8 / 4); // -2

    printf("\nFloating divisions\n");
    printf("%f\n", 9.0 / 4.0);
    printf("%f\n", 9.0 / 4); // Note : 4 is integer
    // CPU는 자료형이 다른 두 개의 숫자끼리 곱하기, 나누기 불가 
    // 형변환 : 컴파일러가 double을 int로 나누려고 하는구나, --> double로 내부적으로 바꾼다.
    // 가급적이면 연산할때 코딩시에 같은 형끼리 연산하도록 (부득이한 경우 형변환 - 표기해줄것)

    return 0;
}