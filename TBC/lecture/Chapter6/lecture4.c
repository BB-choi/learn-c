#include <stdio.h>
# include <math.h>  // fabs()

int main()
{
    /* 
        Relational Operators

        <       is less than
        <=      is less than or equal to
        ==      is equal to
        >=      is greater than or equal to
        >       is greater than
        !=      is not equal to
     */

    /* int n = 0;
    while (n++ < 5)     // n++ < 5 is a relational expression
        printf("%d ", n);

    printf("\n");

    char c = 'A';
    while (c != 'Z')
        printf("%c ", c++); */

    const double PI = 3.1415926535897932384626433832795;    // 상수를 만듦
    double guess = 0.0;

    printf("Input PI : ");
    scanf("%lf", &guess);
    // while (guess != PI)     
    // 실수끼리 비교할때에는 != 연산자를 잘 사용하지 않는다.
    // fabs() 안에 넣어준 값의 절대값을 return
    // while (fabs(guess - PI) > 0.01)     // 절대값의 차이가 0.01 이하라면 Good, 0.01을 조절하면 좀 더 높은 정밀도를 사용자에게 요구 가능
    while (fabs(guess - PI) > 0.001)
    {
        printf("Fool! Try again.\n");
        scanf("%lf", &guess);
    }

    printf("Good!");
    

    return 0;
}