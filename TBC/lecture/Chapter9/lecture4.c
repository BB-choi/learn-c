#include <stdio.h>

// 변수는 변수를 사용할 수 있는 유효한 공간에서만 사용가능

// int a; // 파일 영역 변수 : 파일 전체에서 접근, 사용 가능

int int_max(int i, int j); // 함수 선언 프로토타입

int int_max(int i, int j) // 함수 definition, 링킹시에 바디를 찾아서 링킹
{
    // a = 456;
    int m; // 지역변수, m은 이 블럭 안에서만 유효하다.
    // stack frame

    m = i > j ? i : j;

    return m;
}

int main()
{
    // m = 123;

    int a; 
    // 바깥에서 선언한 변수를 안에서 다시 선언하면 다시 정의된다. (지역변수 a)
    // 변수는 메모리상 주소를 다루는 명칭 (사람이 인식할 수 있는 인식자 이름으로)
    // 메모리상 어떤 공간. 주소 --> &변수

    a = int_max(1,2);

    printf("%d\n", a);
    printf("%p\n", &a); 
    // & pointer : 주소가 뭔지 알려주는 연산자(operator)
    // format specifier "p" : 주소를 알려준다. 변수a의 주소값 직접 출력

    {
        // 이름이 동일한 변수를 하나 더 선언
        int a;
        // 바깥의 a와 다른 a이다. 
        a = int_max(4,5);

        printf("%d\n", a);
        printf("%p\n", &a);

        int b = 123;
    }

    printf("%d\n", a);
    printf("%p\n", &a); // 바깥의 a끼리 같음

    return (0);
}