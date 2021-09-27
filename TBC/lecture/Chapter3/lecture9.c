#include <stdio.h>
// #include <stdint.h> // also included in inttypes.h
#include <inttypes.h>

int main()
{
    int i;

    // stdint.h include로 사용가능함.
    // 너비가 고정돼있는 정수형처럼 사용 가능
    int32_t i32;        // 32 bit integer
    int_least8_t i8;    // smallest 8 bit 적어도 8비트를 가지는 가장 작은 타입
    int_fast8_t f8;     // fastest minimum 8비트 중 가장 빠른 것
    intmax_t imax;      // biggest signed integers 정수중에서는 가장 큰것
    uintmax_t uimax;    // biggest unsigned integers unsigned  정수중에서 가장 큰 것

    i32 = 1004;

    // printf 사용시 문제 될 수 있다. 형식지정자 (어떤 것인지 알 수 없다.)
    // #include <inttypes.h> 
    printf("me32 = %d\n", i32);
    printf("me32 = %" "d" "\n", i32); // 분리
    printf("me32 = %" PRId32 "\n", i32); // 매크로로 교체
    // PRI: print d32:deciaml32 32비트 정수 -->  %d로 해야한다.
    // go to definition

    return 0;
}