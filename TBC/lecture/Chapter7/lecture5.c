#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);

    /* if (number == 1)
        printf("One");
    else if (number == 2)
        printf("Two");
    else if (number == 3)
        printf("Three"); */



    /* if(number == 1)
        printf("One");
    else
        if(number == 2)
            printf("Two");
        else
            if (number == 3)
                printf("Three");
    // minimum 127 levels of nestings (컴파일러의 최소) */

    /* if (number > 5)
        if (number < 10)
            printf("Larger than 5 smaller than 10\n");
    else // if (number < 10) 와 짝이 된다. --> 의도대로 작동하지 않음 ==> 중괄호로 영역을 명확히 해 주기.
        printf("Less than or equal to 5");

    // Compilers ignore indenting */ 
    // 문법상 가까이에 있는 if와 붙는다. 중괄호로 예방하기 (헷갈릴 것 같으면 중괄호 사용!)


    if (number > 5)
    {
        if (number < 10)
            printf("Larger than 5 smaller than 10\n");
        else
            printf("Larger than 10\n");
    }
    else
        printf("Less than or equal to 5");

    return 0;
}