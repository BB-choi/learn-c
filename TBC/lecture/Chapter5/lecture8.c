#include <stdio.h>

int main()
{
    /* int a = 0;
    // 후위연산자 postfix
    a++; // a = a + 1 or a += 1;
    printf("%d\n", a);

    // 전위연산자 prefix
    ++a; // a = a + 1 or a += 1;
    printf("%d\n", a);*/

    /* double b = 0;
    b++;
    printf("%f\n", b);

    ++b;
    printf("%f\n", b); */

    // count++ : 현재 상태 이후에 증가 (증가를 예약한다)
    /* int count = 0;
    while(count < 10) // ++count or count++
    {
        printf("%d ", count++); // ++count or count++
        // count = count + 1; // count += 1;
        // count++;
    } */


    /* int i = 1, j = 1;
    int i_post, pre_j;

    i_post = i++;
    pre_j = ++j;

    printf("%d %d\n", i, j);
    printf("%d %d\n", i_post, pre_j); */

    /* int i = 3;
    int l = 2 * --i;
    printf("%d %d\n", i, l);

    i = 1;
    l = 2 * i--;
    printf("%d %d\n", i, l); */

    /* very high precedence */ // 우선순위가 매우 높다.
    /* int x, y, z;
    x = 3, y = 4;
    z = (x + y++) * 5; // (x+y)++ or x+(y++) ?
    printf("%d %d %d", x, y, z); */

    /* ++ and -- affect modifiable l-values */ 
    // 수정 가능한 L-value에만 사용가능하다. 리터럴이나 상수에는 사용할 수 없다.
    /* int x = 1, y = 1, z;
    z = x * y++; // (x) * (y++), not (x*y)++
    // (x*y)는 일시적으로 R-value. 메모리 공간을 갖지 못한다. 따라서 (x) * (y++)
    // z = (x * y)++; // error
    // z = 3++; // error 상수(리터럴) */

    /* Bad practices */
    // 증감 연산자를 남발하는 것은 좋지 않다.

    /* int n = 1;
    printf("%d %d", n, n * n++);
    // 함수 호출시 인자로 들어갈 때, 여러번 들어갈 때는 시스템마다 결과가 다르게 나올 수 있다 (안전하지 않음)
    int x = n / 2 + 5 * (1 + n++);
    // n이 여러번 나옴 --> 위험
    int y = n++ + n++;
    // 눈으로 봤을때도 헷갈리고, 의도 파악이 어려움 */
    

    return 0;
}