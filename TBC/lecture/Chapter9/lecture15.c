#include <stdio.h>

int main()
{
    /* int a = 1234;
    printf("%p\n", &a);
    printf("%d\n", a); */

    /* // int *ptr;
    int *ptr = 1234; 
    // 이 주소로 가서 컴퓨터가 뭔가를 가져오려 했지만 실제로 할당된 공간이 아님
    // redirection 하러 실제로 갔는데, 그 때 문제가 생김(런타임에러)

    // printf("%p\n", ptr);
    printf("%d\n", *ptr);
    // 초기화 하지 않은 포인터값 : uninitialized local variable */

    // 방지하는 방법
    // int* safer_ptr; // = NULL
    int* safer_ptr = NULL;
    // 포인터를 선언함과 동시에 NULL값을 대입
    // safer_ptr를 사용해도 되는지 여부를 알 수 있다.

    int a = 123;

    // safer_ptr = &a; // 확실한 변수 있음 --> 포인터 안전


    int b;
    scanf("%d", &b);

    // 이렇게 사용하는 경우가 많다. 대입이 될지 안될지가 결정되지 않음
    // 런타임에 결정됨
    if (a % 2 == 0)
        safer_ptr = &a;


    if (safer_ptr != NULL)
        printf("%p\n", safer_ptr);
    
    if (safer_ptr == NULL)
        printf("%d\n", *safer_ptr);

    return (0);
}