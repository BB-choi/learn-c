#include <stdio.h>

#define PI 3.141592f
// 상수를 리터럴로 입력하는 것보다 기호적 상수로 작성하는 것이 훨씬 좋다.
// define 전처리기가 작동하는 원리 : PI가 교체(3.141592f)가 되는것 --> 교체 후에 컴파일된다.
#define AI_NAME "Friday"

int main()
{
    // 기호적 상수를 선언할 때 반드시 define으로 해야하는 것은 아니다.
    // const float pi = 3.141592f;
    // float const pi = 3.141592f;

    float radius, area, circum;

    printf("I'm %s.\n", AI_NAME);
    printf("Please, Input radius\n");

    scanf("%f", &radius);

    // area = 3.141592f * radius * radius; // area = pi*r*r
    // circum = 2.0f * 3.141592f * radius; // circum = 2.0 * pi * r
    area = PI * radius * radius; // area = pi*r*r
    circum = 2.0f * PI * radius; // circum = 2.0 * pi * r

    // sphere area, sphere volume, ....

    printf("Area is %f\n", area);
    printf("Circumference is %f\n", circum);

    // TODO: wrong usage, strings, const

    return 0;
}