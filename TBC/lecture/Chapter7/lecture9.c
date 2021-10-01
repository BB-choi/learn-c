#include <stdio.h>
#include <stdbool.h>

int main()
{
    /* int temp;
    temp = true ? 1024 : 7; // ternary operator
    // 참 ? 참 : 거짓
    // temp에 (true ? 1024 : 7 )값 대입
    printf("%d\n", temp);

    temp = false ? 1024 : 7;
    printf("%d\n", temp); */

    int temp;
    temp = 1 ? 1024 : 7; // true, false 아닌 1, 0 사용해도 같다.
    printf("%d\n", temp);

    temp = 0 ? 1024 : 7;
    printf("%d\n", temp);




    int number;
    scanf("%d", &number);

    // bool is_even;
    const bool is_even = (number % 2 == 0) ? true : false;
    // const로 고정하고 싶은데 조건에 따라서 다른 값으로 고정하고 싶을때 

    // if (number % 2 == 0)
    //     is_even = true;
    // else
    //     is_even = false;

    // is_even = number % 2 == 0 ? true : false;


    // is_even = (number % 2 == 0) ? true : false;
    // 대부분의 경우 괄호를 쳐 준다
    // ? operator는 연산자 우선순위가 매우 낮으므로 괄호 없이도 실행이 되기는 한다.


    // bool is_even = (number % 2 == 0) ? true : false;

    if (is_even)
        printf("Even");
    else
        printf("Odd");
 

    // bool is_even = (number % 2 == 0) ? printf("Even") : printf("Odd");
    // (number % 2 == 0) ? printf("Even") : printf("Odd");
    // printf("%s\n", (number % 2 == 0) ? "Even" : "Odd"); // 내가 푼 것


    /* int a = 1, b = 2;
    int max = (a > b) ? a : b;
    // 선언과 동시에 값을 초기화
    // 필요하다면 const */

    return 0;
}