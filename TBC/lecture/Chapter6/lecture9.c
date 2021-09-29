#include <stdio.h>

int main()
{
    /* 
        for(initialize; test; update)
            statement
     */

    for (int i = 10; i > 0; i--) 
        printf("%d ", i);
    
    for (int i =0; i < 100; i = i + 8)
        printf("%d ", i);

    for (char c = 'A'; c <= 'Z'; c++)
        printf("%c ", c);

    for (int i = 0; i * i < 10; i++)
        printf("%d ", i);

    for (int x = 1, y = 5; y <=20; y = (++x * 3) + 10)
        printf("%d ", x);
    // 서로 다른 자료형인경우에는 for문에서 같이 초기화 할 수 없다.

    for (double d = 100.0; d < 300; d = d * 1.1)
        printf("%f\n", d);
    // double이나 float 같은 부동소수점형도 가능


    // int i, n;
    // n = 2;

    // for (i = 2; n < 10; /* left blank */)
    // {
    //     n = n * i;
    //     printf("%d\n", n);
    // }

    // for ( ; ; )
    /* for (;;) // while(1) 과 동일 (무한반복)
        printf("I love you! "); */

    int i = 0;
    for (printf("Let's go!\n"); i != 7; scanf("%d", &i))
        ; // null statement

    return 0;
}