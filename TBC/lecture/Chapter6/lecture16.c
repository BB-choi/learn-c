#include <stdio.h>

#define NUM_DAYS 365

int main()
{
    /* char my_chars[] = "Hello, World!";

    int daily_temperature[NUM_DAYS];
    double stock_prices_history[NUM_DAYS];

    printf("%zd\n", sizeof(stock_prices_history)); // 2920
    printf("%zd\n", sizeof(double) * NUM_DAYS); // 총 할당되는 메모리 2920
    printf("%zd\n", sizeof(stock_prices_history[0])); // 8 double 하나 */

    // int my_number1 = 1;
    // int my_number2 = 3;
    // int my_number3 = 4;
    // int my_number4 = 2;
    // int my_number5 = 1024;

    int my_numbers[5];

    /* // 첫번째 공간은 0 
    my_numbers[0] = 1; // subscripts아래첨자, indicies index복수, offsets(연속적으로 할당받은 첫 메모리 주소로부터 얼마나 떨어져있나 -0칸만큼)
    my_numbers[1] = 3;
    my_numbers[2] = 4;
    my_numbers[3] = 2;
    my_numbers[4] = 1024;

    // scanf("%d", &my_numbers[0]);
    // []가 연산자 우선순위가 높다. my_numbers[0]의 메모리 주소를 찾아 간다.
    scanf("%d", my_numbers); // 변수에는 &를 붙여야하고 array는 그 자체가 주소이므로 &가 없어도 된다.

    printf("%d\n", my_numbers[0]);
    printf("%d\n", my_numbers[1]);
    printf("%d\n", my_numbers[2]);
    printf("%d\n", my_numbers[3]);
    printf("%d\n", my_numbers[4]); */


    /* Runtime Error */
    // my_numbers[5] = 123; // out of bound
    // 컴파일시에는 문제없고, 실행하면 런타임에러

    // my_numbers = 7; // compile error
    // printf("%d\n", my_numbers[5]); // out of bound

    return 0;
}