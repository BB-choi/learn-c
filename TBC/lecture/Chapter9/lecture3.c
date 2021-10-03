#include <stdio.h>

int int_min(int, int); 
// 함수다, ()가 들어있으므로
// 자료형 함수의 아름(입력으로 받는것들 argument); 반환자료형을 함수의 자료형처럼 생각할 수 있다.
// ---> 블랙박스! 함수의 출력 함수의 이름(함수에 입력)

int main()
{
    int i1, i2;

    while (1)
    {
        printf("Intput two integers: ");

        if(scanf("%d %d", &i1, &i2) != 2) break;

        int lesser = int_min(i1, i2);
        // int lesser = min;
        printf("The lesser of %d and %d is %d\n", i1, i2, lesser);

        // printf("The lesser of %d and %d is %d\n", i1, i2, int_min(i1, i2));
    }

    printf("End.\n");

    return (0);
}

int int_min(int i, int j)
// int_min(int i, int j) --> 문법상 반환자료형은 생략 가능하다. 프로토타입에서도 가능
// 정수형 반환자료형은 생략할 수 있다. 함수의 반환자료형이 없을 경우에는 컴파일러가 정수(int)라고 생각한다.
{
    int min; // 지역변수 local variable

     if (i < j)
        min = i;
    else
        min = j;
    
    return min;
    // 값을 return, int int_min에서는 자료형(int)

    // return (i < j) ? i : j;

    // return (float)min; 
    // int를 float로 바꾸고 있어서 문제 x
    // float를 다시 int로 바꾸고 있어서 문제 --> 내부적으로는 강제로 (int) ((flaot)min); --> return 해줄때. 나갈때 int int_min
    // 그냥 int_min으로만 함수를 선언해도 똑같다 (내부적으로 int로 예상함. 컴파일러가)

    /* if (i < j)
        return i;
        //  return 으로 돌려보낼때마다 함수 종료
    else 
        return j;   
        // else가 없다면 오류--> not all control paths returns a value
        // 분기가 생기고 흐름이 생겼는데 흐름제어가
    
    // printf("Who am I?"); // 실행될 수 없다.
    printf("ERROR"); // 이건 실행되면 안된다고 의도적으로 남겨둘수도 있다.
    exit(1); // 일어나면 안될 일이라 강력히 표현하기 */

    // return; 
    // return with no value
    // 반환자료형이 있는 함수는 반드시 return 값이 있어야 한다.
    // 일반적인 경우는 반환값이 없는 경우도 종종 발생한다 void
}