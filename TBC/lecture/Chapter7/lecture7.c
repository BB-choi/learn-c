#include <stdio.h>
#include <ctype.h>      // islower()
#include <stdbool.h>
#include <iso646.h>

#define PERIOD '.'

int main()
{
    /*
        Logical operators

        && : and
        || : or
        ! :not
    */

//    bool test1 = 3 > 2 || 5 > 6;     // true;
//    bool test2 = 3 > 2 && 5 > 6;     //false
//    bool test3 = !(5 > 6);           // true, equivalent to 5 <= 6

//    printf("%d %d %d\n", test1, test2, test3); // 1 0 1

//     // logical operators table - truth table

    /* Character counting example */

    // char ch;
    // int count = 0;

    // while((ch = getchar()) != PERIOD)
    // {
    //     //TODO: make exceptions
    //     if (ch != '\n' && ch != ' ')
    //         count++;
    // }

    // printf("%d", count);

    /* 
        Alternatives in iso646.h

        && : and
        || : or
        ! : not

     */

    //    bool test1 = 3 > 2 or 5 > 6;     // true;
    //    bool test2 = 3 > 2 and 5 > 6;     //false
    //    bool test3 = not(5 > 6);           // true, equivalent to 5 <= 6
    
    //    printf("%d %d %d\n", test1, test2, test3); // 1 0 1


    /* 
    
        Precedence 우선순위

        Check !, &&, !! in the operator precedence table
        // https://en.cppreference.com/w/c/language/operator_precedence

        !는 우선순위가 높은 편이다(단항연산자)
    */

    int a = 1, b = 2, c = 3, d = 4;

    a > b && b > c || b > d;
    ((a > b) && (b > c)) || (b > d);

    /* 
        Short-circuit Evaluation

        - Logical expressions are evaluated from left to right
        - && and || are sequence points

     */

    // int temp = (1 + 2) * (3 + 4);

    // printf("Before : %d\n", temp); 
    // // temp가 무엇이 될지 모른다. 컴파일러따라 다를 수 있다 (표준이 없다)

    // if (temp == 0 && (++temp == 1024)) {
    //     // do nothing
    //     // 이런 logical expression은 왼쪽에서 오른쪽으로 계산된다.

    //     // ++temp가 실행되느냐, 안되느냐? ==> 안된다. temp==0 에서 이미 false이므로 (++temp == 1024)까지 실행되지 않는다.
    // }

    // printf("After : %d\n", temp); // Before의 temp와 같은 temp값

    

    /* int x = 1, y = 2;
    if(x++ > 1 && x + y == 4)
        printf("%d %d\n", x, y);
    
    // &&와 ||는 sequence points 
    // x++는 x + y == 4 까지 기다렸다가 ++되는 것이 아니고 &&를 만났을때 바로 ++된다. 
    // 웬만하면 헷갈릴 상황은 만들지 말자
    */

    /* Ranges */

    /* for (int i = 0; i < 100; ++i)
        if (i >= 10 && i <=20)
            printf("%d ", i);
            
    printf("\n");

    for (int i = 0; i < 100; ++i)
        if (10 <= i <= 20)      // Note: if((10 <= i) <= 20) -> true:1, false:0 -> 0, 1 모두 20보다 작다.
            printf("%d ", i); */

    
    for (char c = -128; c < 127; ++c)
        if(c >= 'a' && c <= 'z')
            printf("%c ", c);

    printf("\n");

    for (char c = 0; c < 127; ++c)
        if(islower(c))
            printf("%c ", c);

    return 0;

}