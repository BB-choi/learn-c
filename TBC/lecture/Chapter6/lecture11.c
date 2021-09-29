#include <stdio.h>

int main()
{
    // int a, b;
    // int a, double b; (x)

    /* for (int n = 1, nsqr = n * n; n < 10; n++, nsqr = n * n)
        printf("%d %d\n", n, nsqr); */

    // Note that commas in printf() are not comma operators
    // but separators

    /* int i, j;
    i = 1;
    i++, j = i; // comma is a sequence point 
    // --> 후위 증가연산자가 ,를 만나서 계산이 된다.
    // i가 2가 되고 그 후에 i 의 value가 j에 들어간다.
    printf("%d %d\n", i, j);    // 2 2 */

    /* int x, y, z;
    z = x = 1, y = 2;
    printf("x=%d, y=%d, z=%d \n", x, y, z); // x=1, y=2, z=1
    z = (x = 1), (y = 2);
    printf("x=%d, y=%d, z=%d \n", x, y, z); // x=1, y=2, z=1
    z = ((x = 1), (y = 2));
    // ((x = 1), (y = 2))의 value를 z에 넣는다. --> comma 연산자는 가장 오른쪽에 있는 값이 전체 expression의 값
    printf("x=%d, y=%d, z=%d \n", x, y, z); // x=1, y=2, z=2  */

    // int my_money = 123,456; // error
    int my_money = (123, 456); 
    // 괄호로 묶으면 컴마 연산자로 할 수 있다. () 전체를 하나의 value로 보고
    printf("%d\n", my_money); // 456

    return 0;
}