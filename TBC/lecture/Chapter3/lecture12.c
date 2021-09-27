#include <stdio.h>
#include <float.h>
#include <math.h>

int main()
{
    // 😮 round-off  errors (ex1)
    /* float a, b;
    // a = 1000.0f + 1.0f;
    // b = a - 1000.0f;
    a = 1.0E20f + 1.0f; // 너무 큰 숫자와 너무 작은 숫자 연산 --> 작은 숫자가 사라짐 (round off 반올림x)
    b = a - 1.0E20f;
    printf("%f\n", b); */

    // 😮 round-off errors (ex2)
    /* float a = 0.0f;
    // 0.01을 표현할 수 없다. 오차가 누적되어 1.0이 되지않음.

    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;

    printf("%f\n", a); // 0.999999 */

    // 😮 overflow
    /* // #include <float.h> --> 매크로로 max가 정의되어 있다.
    float max = 3.402823466e+38F;
    // double max = 3.402823466e+38F;
    printf("%f\n", max);
    max = max * 100.0f;
    printf("%f\n", max); // inf infinite 너무큰 숫자 */

    // 😮 underflow
    /* float f = 1.401298464e-45F;
    // 무한히 작은 숫자를 표현할 수 없다.
    printf("%e\n", f);
    f = f / 100.0f;
    f = f / 2.0f; 
    // subnormal 숫자가 사라져버림, 부동소수점의 정밀도로는 표현할 수 없는 작은 숫자
    // 정밀도를 모두 잃은 숫자
    printf("%e\n", f); */


    /* float f = 104.0f;
    printf("%f\n", f);
    f = f / 0.0f;
    printf("%f\n", f); // inf, warning : potential divide by 0 */

    float f = asinf(1.0f); // 아크사인 sin(-1~1)의 역함수
    printf("%f\n", f);

    // 수학적으로 존재하지 않는 값 강제로 계산
    f = asinf(2.0f); // sin은 2.0이라는 값을 가지지 못하므로
    printf("%f\n",f); // nan(ind) not a number

    return 0;
}