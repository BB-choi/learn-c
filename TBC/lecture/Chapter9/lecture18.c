#include <stdio.h>

// void swap(int* u, int* v) 
/* void swap(int a, int b) // c언어 : 반환값을 하나밖에 못줌
{
    printf("%p %p\n",&a, &b); 
    // swap의 매개변수 a, b와 main의 a,b는 다르다. main에서 swap되지 않음
    // 이름만 같고 서로 다른 a, b

    // a, b가 새롭게 선언이 되고 그 값(value)만 가지고 들어온다.
    // 값에 의한 호출 call by value

    int temp = a;
    a = b;
    b = temp;
    // a, b는 함수 영역 안에서만 사용하는 지역변수

} */

// 값을 넘겨줘도 변하지 않으므로 a의 주소와 b의 주소를 넘겨준다
void swap(int* u, int* v) 
// 주소(포인터)에 의한 호출 call by pointer
{
    printf("%p %p\n", u, v); // u, v와 a, b의 주소가 같다.

    int temp = *u;
    *u = *v;
    *v = temp;

}


int main() 
{
    
    int a = 123;
    int b = 456;

    /* // swap - 함수로 만들어서 재활용
    int temp = a;
    a = b;
    b = temp; */

    printf("%p %p\n",&a, &b);


    // swap(a, b);
    // 포인터를 넘겨준다
    
    swap(&a, &b); // swap된다.
    // TODO:
    printf("%d %d\n", a, b);


	return 0;
}
