#include <stdio.h>

void say_hello(void); 

int main()
{
    int x, y, z;

    x = 1;
    y = 20;
    z = 3;

    z = x + y;

    say_hello(); // F12 go to definition

    return 0;
}

void say_hello(void) 
{
    int x = 1;
    x = 10;
    printf("Hello, World!\n");

    return; // return 타입이 void인 경우에는 return을 생략할 수 있다.
}