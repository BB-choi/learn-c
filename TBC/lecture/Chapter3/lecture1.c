// #define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
/*     // int i = 0, j = 0;
    int i = 0, j = 0, sum = 0;
    // 변수는 항상 초기화 하는 것을 권장
    // int sum = 0;
    
    printf("Input Two integers\n");

    scanf("%d%d", &i, &j);

    // int sum = i + j;
    sum = i + j;

    printf("%d plus %d = %d\n", i, j, sum);
    // printf("%d plus %d = %d\n", i, j, i + j);
    // 출력 형식 지정자와 뒤에 작성해 주는 변수 갯수가 같아야 한다. */

    // int won = 0;
    // int dollar = 0;
    // float won = 0;
    // float dollar = 0;
    float won = 0.0f;
    float dollar = 0.0f;

    printf("Input Won \n");
    scanf("%f", &won);

    // dollar = won * 0.00085;
    // float * double
    dollar = won * 0.00085f;

    printf("Dollar = %f\n", dollar);

    return 0;
}