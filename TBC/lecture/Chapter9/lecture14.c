#include <stdio.h>

int main()
{
    // int *a_ptr vs int* a_ptr
    // int *my_ptr, sec_ptr

    // int *a, b; // a만 포인터, b는 int

    // 포인터는 개념상으로는 int* a, b로 생각할 수 있다. (추후 typedef)
    // 포인터 자료형이 있는것처럼 

    int* a, * b; // visual studio가 int* a 이런식으로 수정함

    // cpp에서는 무조건 쪼개서 선언
    /* int* a;
    int* b; */

    


    return (0);
}