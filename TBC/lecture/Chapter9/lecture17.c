#include <stdio.h>

int main()
{
    char a = 1;
    float b = 3;
    double c = 5;

    // 메모리 주소가 저장되는 공간
    // 다양한 자료형에 대한 포인터 변수들의 사이즈가 모두 같다.
    char* ptr_a = &a;
    float* ptr_b = &b;
    double* ptr_c = &c;

    a = 2;
    b = 4;
    c = 6;

    // x64 8byte 주소체계
    printf("%zd %zd %zd\n", sizeof(a), sizeof(b), sizeof(c));
    printf("%zd %zd %zd\n", sizeof(ptr_a), sizeof(ptr_b), sizeof(ptr_c));
    printf("%zd %zd %zd\n", sizeof(&a),sizeof(&b), sizeof(&c));
    printf("%zd %zd %zd\n", sizeof(char*),sizeof(float*), sizeof(double*));

    // 1 4 8
    // 8 8 8
    // 8 8 8
    // 8 8 8
    return (0);
}