// https://www.tutorialspoint.com/cprogramming/c_operators_precedence.htm

#include <stdio.h>

int main()
{
    int x = 1, y =2, z;

    x > y + 2;
    // 연산자 우선순위에 따라서 아래와 같이 작동된다.
    // 우선순위를 바꾸려면 (x > y) + 2 로 하면 된다.
    x > (y + 2);

    x = y > 2;
    x = (y > 2);

    z = x > y;
    z = (x > y);

    x != y == z;
    // !=와 ==는 우선순위가 같으므로 왼쪽에서, 오른쪽으로
    (x != y) == z;

    return 0;
}