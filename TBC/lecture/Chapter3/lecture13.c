#include <stdio.h>
#include <stdbool.h> // include 하면 bool 타입 선언 가능

int main()
{
    printf("%u\n", sizeof(_Bool)); // 1 byte 1bit(x)
    // 자료형이 가질 수 있는 가장 작은 크기.(메모리에서 주소를 배정받을 수 있는 최소단위)

    _Bool b1;
    b1 = 0; // false
    b1 = 1; // true

    printf("%d\n", b1);

    bool b2, b3;
    b2 = true; // 결국 내부적으로는 1
    b3 = false; // 0

    // 컴퓨터는 false가 아니면 true라고 판단

    printf("%d %d\n", b2, b3);

    return 0;
}