#include <stdio.h>

// void say_hello(void) 
// {
//     printf("Hello, World!\n");

//     return; // return 타입이 void인 경우에는 return을 생략할 수 있다.
// }

// function declaration, prototyping 함수의 선언
void say_hello(void); 
// 함수가 여러개 일 수 있으므로 이렇게 선언하면
// 컴파일이 끝난 후 링킹하는 과정에서 아래의 함수를 가져다 쓸 수 있다. (링커)

int main()
{
    // printf("Hello, World!\n");
    // printf("Hello, World!\n");
    // printf("Hello, World!\n");
    // printf("Hello, World!\n");
    // printf("Hello, World!\n");

    // i = 1 x 선언 순서
    // int i = 0; x

    // 함수 호출 전 선언이 되어 있어야 한다.
    say_hello();
    // say_hello();
    // say_hello();
    // say_hello();
    // say_hello();

    return 0;
}

// function definition 함수의 정의
void say_hello(void) 
{
    printf("Hello, World!\n");

    return; // return 타입이 void인 경우에는 return을 생략할 수 있다.
}