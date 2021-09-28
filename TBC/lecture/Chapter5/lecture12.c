#include <stdio.h>

void draw(int n);   // ANSI function prototype declaration

int main()
{
    int i = 5;
    char c = '#';   // 35
    float f = 7.1f;

    draw(i); // 호출하는 입장에서는 argument 5라는 값(value)를 넣어줌
    // draw(c);
    draw((int)c);
    // draw(f);
    draw((int)f);

    /* Arguments vs. Parameters */ // 인수 vs 매개변수
    // actual argument, actual parameter -> argument (values)
    // formal argument, formal parameter -> parameter (variables)

    return 0;
}

void draw(int n) // 함수 정의하는 입장에서는 parameter. 어떤 값이든 
{
    // TODO: print stars (asterisks)

    while(n-- > 0)
        printf("*");

    printf("\n");
}