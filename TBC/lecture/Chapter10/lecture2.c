#include <stdio.h>

#define MONTHS 12   // symbolic constant, macro

int main()
{
    /* Basic usage */
    int high[MONTHS] = { 2, 5, 11, 18, 23, 27, 29, 30, 26, 20, 12, 4}; // 선언

    /* for (int i = 0; i < MONTHS; ++i)
         printf("%d ", high[i]);
    printf("\n");

    float avg = 0.0;
    for (int i = 0; i < MONTHS; ++i)
        avg += high[i];
    printf("Average = %f\n", avg / (float)MONTHS);

    high[0] = 1;
    high[1] = 2; */

    // 선언이 끝나고 나면 이런식으로 안된다. 하나씩만 넣을 수 있다.
    // 실전에서는 for문으로 하는 경우가 많고, 파일입출력으로 
    // high = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 }; // Not working
    // high[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 }; // Not working

    /* Addresses */
    /* printf("%p %p\n", high, &high[0]); // 주소가 같다.

    for (int i = 0; i < MONTHS; ++i)
        printf("%lld\n", (long long)&high[i]); // x64에서는 8바이트이므로 long long (10진수정수)
        // 4바이트씩 커지는 주소 (double로 해보면 8바이트)
    printf("\n"); */

    /* Complier doesn't check whether indices are valid. */
    // 컴파일러는 이 오류를 잡아주지 않는다. 유효한 숫자인지 체크해 주지 않음
    // high[12] = 4; // Error, 할당받은 배열 길이를 넘어가는 인덱스
    // high[-1] = 123; // Error, 할당받은 메모리 주소 전으로 

    /* const and array */
    // const int temp = 0; // 혹은 int const temp = 0 -> 값을 바꿀 수 없다.
    // temp = 4;
    // const int low[12] = { -7, -5, 1, 7, 13, 18, 22, 22, 16, 9, 2, -5};
    // // 배열의 원소를 바꿀 수 없다.
    // low[0] = 123;

    /* When array is not initialized */
    // 배열을 초기화 해주지 않은 경우 --> 컴파일러는 오류라고 찾아주지 않음
    // int not_init[4];    // TODO: try static (storage class)
    // static int not_init[4]; // static인 경우에는 0000으로 초기화되어나온다(printf)
    // for (int i = 0; i < 4; ++i)
    //     printf("%d\n", not_init[i]); // 초기화 되지 않은 array의 값을 출력하려고 한다
    // 쓰레기값이 들어간다 -- 프로그래머가 나중에 초기화하는구나

    /* Partially initialized */
    /* int insuff[4] = { 2, 4 }; // size 보다 부족하게 넣으면, 컴파일러가 알아서 00 을 채움
    for (int i = 0; i < 4; ++i)
        printf("%d\n", insuff[i]); // 2 4 0 0 */

    /* Overlly initialized */ // 초기화하는 원소가 과하게 많은 경우
    // int over[2] = { 2, 4, 8, 16 }; // 컴파일러가 에러를 발생시킴

    /* Omitting size */
    /* const int power_of_twos[] = { 1, 2, 4, 8, 16, 32, 64 };
    // const int power_of_twos[7] = { 1, 2, 4, 8, 16, 32, 64 }; 과 동일하다
    printf("%d\n", sizeof(power_of_twos)); 
    // 동적할당에서는 이렇게 동작되지 않는다. (동적할당을 받아서 메모리처럼 사용하는 경우)
    printf("%d\n", sizeof(int)); // 각각 칸의 사이즈
    printf("%d\n", sizeof(power_of_twos[0])); // 혹은 첫번째 칸의 사이즈

    for(int i = 0; i < sizeof power_of_twos / sizeof power_of_twos[0]; ++i) // 원소가 몇 개인지 모를경우
        printf("%d ", power_of_twos); */ // 28(7개 * 4byte), 4, 4

    /* Designated initializers */ 
    // designate 지정한다, 어느 칸에 무엇이 들어갈지
    /* int days[MONTHS] = {31, 28, [4] = 31, 30, 31, [1] = 29 };
    // index[1]에 29를 넣겠다. [4]자리에 31 그다음에 30, 31 비어진 곳은 0
    for (int i = 0; i < MONTHS; ++i)
        printf("%d ", days[i]); // 31 29 0 0 31 30 31 0 0 0 0 0 */

    /* Specifying Array sizes */
    // array의 사이즈를 []에 넣어줘야 되는데, 0이 안됨, 양의 정수가 들어와야 된다.
    // int arr[MONTHS];    // Symbolic integer constant (양의 정수만 가능)
    // double arr2[123];   // Literal integer constant
    // float arr3[3*4 + 1]; // 컴파일 시기에 미리 계산되므로 가능
    // float arr4[sizeof(int) + 1];

    // // float arr5[-10]; // No 공간 크기를 음수로 불가능
    // // float arr6[0];  // No 0칸짜리 array는 불가 arr6은 사용할 수 없는 주소를 가리키게 됨
    // // float arr7[1.5]; // No 실수는 안된다.
    // float arr8[(int)1.5];   // Yes 형변환 -> 1이구나 (컴파일러가 미리 계산)

    // int n = 8;
    // float arr9[n];      // Variable-Length Array is optional from C11
    // C99에서는 필수였는데 C11에서는 선택적 (비주얼 스튜디오에서는 안됨)
    // 거의 비슷한 것을 동적할당으로 가능

    int n = 5;
    float arr[n];

    for(int i = 0; i < n; ++i)
        arr[i] = (float)i;

    for(int i = 0; i < n; ++i)
        printf("%f ", arr[i]);

    




    return (0);
}
