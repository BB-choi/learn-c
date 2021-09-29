#include <stdio.h>

int main()
{
    /* 
    while (expression)
        statement
     */

    int i;

    /* i = 1;
    while(i < 5)    // infinite loop
        printf("Hi!\n"); */ // iteration

    /* i = 1;
    while(--i < 5)  // wrong direction --> infinite loop
        printf("Hi!\n"); */
    
    /* i = 1;
    while (i < 5)
    {
        printf("i before = %d\n", i);
        i++;
        printf("i after = %d\n", i);
    } */

    /* i = 10;
    while (i++ < 5)     // cannot enter
    {
        printf("Hi!\n");
    } */

    /* Common mistakes */

    /* i = 0;
    // while (i < 3)
    //     printf("%i\n", i);
    // i++;       // indenting
     while (i < 3)
    {
        printf("%i\n", i);
        i++;    
    } */

    /* i = 0;
    while (i++ < 3);    // null statement 세미콜론 위치
        printf("%i\n", i); */
    
    /* while (scanf("%d", &i) == 1)
        ; // null statement
        // do somehting (?)
    // 숫자가 아닌 값을 입력 받을때까지 계속 실행
    // 굳이 이렇게 암호문처럼 작성할 필요가 없다. 
    // --> 읽기 편하고 의사를 명확하게 표현하는 코드가 더 좋은 코드, 의미를 직접적으로 파악할 수 있는 코드
    */

    return 0;


}