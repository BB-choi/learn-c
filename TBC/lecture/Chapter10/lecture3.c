#include <stdio.h>

int main()
{
    int* ptr = 0; // NULL로 넣는게 일반적으로 좋지만 여기서는 포인터 값을 0으로 
    // try double*, long long*, char*, void*
    // void는 자료형이 없으므로 포인트에 연산을 못함 (주소의 값 자체는 의미가 있을 수 있지만)

    // printf("%d", *ptr); // Error in this lecture

    printf("%p %lld\n", ptr, (long long)ptr); // %lld십진수로
    // 0

    ptr ++; // try -=, ++, --, -, +
    // int type의 포인터에 1을 더하면 4가 더해진다 
    // char 1
    // long long 8
    // 주소값에 숫자를 더한다기 보다는 자료형의 사이즈만큼 더해지는 연산이 된다. (배열에 대한 개념)
    // 빼기도 되지만, 유효한 주소값이 아님 (long logn -2하면 -16)

    printf("%p %lld\n", ptr, (long long)ptr);
    //4
    // longlong으로 10진수로 보기위해서

    // 단항연산자로서의 -와 +는 포인터 연산이 안된다.
    // ptr = -ptr; // Not working
    // ptr = +ptr; // Not working

    /* Subtraction */
    // int arr[10];
    // int* ptr1 = &arr[3], * ptr2 = &arr[5];

    double arr[10];
    double* ptr1 = &arr[3], * ptr2 = &arr[5];

    // ptr2 = ptr1 + ptr2; // Not working
    // 포인터 주소끼리 덧셈이 안됨

    int i = ptr2 - ptr1; // meaning?
    // 빼기는 된다. 두 주소의 거리?
    // 메모리는 1차원적으로 쭉 늘어서 있다. 차이를 이용하기

    printf("%p %p %d\n", ptr1, ptr2, i);
    // 000000000061FDC8 000000000061FDD8 2
    // 5 - 3 = 2
    // 주어진 자료형 사이즈만큼 몇 칸 차이각 나는가? 
    printf("%lld %lld %d\n", (long long)ptr1, (long long)ptr2, i);
    //6421960 6421976 2
    // 8바이트 2칸 --> 16만큼 차이난다.

    return (0);
}