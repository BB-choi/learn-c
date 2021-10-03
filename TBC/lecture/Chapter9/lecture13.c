#include <stdio.h>

int main()
{
    int a, b;
    a = 123;

    int *a_ptr; // * : asterisk

    // 정수형 변수의 주소 중 첫번째로 사용하고 있는 주소
	a_ptr = &a;// & : address-of operator 단향연산자임.


    printf("%d %d %p\n", a, *a_ptr, a_ptr);
    // 주소는 p 주솟값의 크기는 변수형(int)의 크기와 상관이 없다. 
    // a_ptr의 %p는 매번 달라진다? ->나 왜 안 달라지지?

    *a_ptr = 456;// * : re-direction or de-referencing

    printf("%d %d %p\n", a, *a_ptr, a_ptr); // *a_ptr로 인해서 a의 값도 변함

    // b = a_ptr;
    // 정수형에 주소를 넣으려는 경우  :  권장하지 않음
    // warning : deffers in levels of indirection from int *  컴파일러 경고 실수로 *뺀 것 아니냐
    // b = (int)a_ptr 하는 거 아니냐 

    b = *a_ptr;
    printf("%d\n", b);

    *a_ptr = 789;

    printf("%d\n", b); // b는 그냥 값만 저장하는 것이기때문에 a변수가 차지하고 있는 메모리 주소가 바뀌어도 그대로
    printf("%d %d %p %p\n", a, *a_ptr, a_ptr, &b);

    b = 12;

    printf("%d\n", b);
    printf("%d %d %p\n", a, *a_ptr, a_ptr); // b는 a의 값에 영향을 주지 않는다.

    a = 1004;
    // 변수에 직접 다른 값을 넣었을때 
    // 포인터가 redirection하는 값이 함께 변하는지
    printf("%d %d %p %d\n", a, *a_ptr, a_ptr, b);

    // *a_ptr로 리디렉션해서 가져온 값도 a와 같이 1004,
    // a가 갖고 있는 값이 변한다고 해서 a_ptr(주소)가 바뀌지 않는다



	return 0;
}