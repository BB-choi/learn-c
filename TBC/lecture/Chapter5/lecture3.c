#include <stdio.h>

int main()
{
    printf("%d\n", 1+2);

    int income, salary, bonus;

    income = salary = bonus = 100; // triple assignment

    salary = 100;
    bonus = 30;

    income = salary + bonus; // l-value vs r - value

    int takehome, tax;
    tax = 20;
    takehome = income - tax;

    int a, b;
    a = -7; // 부호연산자. 부호를 표현하는 operator
    b = -a; // a라는 값에 -1을 곱한다는 "연산자"
    b = +a; // + does nothing +부호 연산자, 얘는 꼭 +로 해야한다고 코딩하고 싶을 때

    1.0f + 2; // ? ==> float에 저장이 된다. 정수 + 실수 => 실수리터럴

    return 0;

}