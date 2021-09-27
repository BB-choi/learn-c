#include <stdio.h>
#include <complex.h>

int main()
{
    // _Dcomplex z;

    // gcc에서의 사용법
    // 만들어 쓰는 것이 보편적이므로 complex는 남겨두었음.
    // double _Imaginary i = 3 // 표준에서는 _Imaginary도 있어야 하는데, gcc에서도 imaginary 는 구현되어있지 않음
    double _Complex z = 1 + 2*I; // I imaginary number 허수

    z = 1 / z;

    printf("1 / (1.0 + 2.0i) = %.1f%+.1fi\n", creal(z), cimag(z));
    // 실수부를 가지고 올 때는 creal(z), 허수부를 가져 올 때는 cimag(z)

    return 0;
}