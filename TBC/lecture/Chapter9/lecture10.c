#include <stdio.h>

/*
	Fibonacci sequence
	1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ...
	ex) fibonacci(5) = 3 + 2 = fibonacci(4) + fibonacci(3)
	ex) fibonacci(6) = 8 = 5 + 3 = fibonacci(5) + fibonacci(4)
*/

int fibonacci(int number);

int main()
{
    for (int count = 1; count < 13; ++count)
        printf("%d ", fibonacci(count));


	return 0;
}

int fibonacci(int number)
{
    // 계산중복 (저장해놓지 않고 계속 계산)
    // printf("fibonacci with %d\n", number);

    if (number > 2)
        return fibonacci(number - 1) + fibonacci(number - 2);    
        // double recursion 재귀호출 2번
    else 
    // 1또는 0인경우 1이 되도록
        return 1;

    // 단점 : 메모리를 많이 사용(비효율적), 계산에 중복이 생긴다.
    // 메모리 사용 오버헤드
}

//Note: memory (in)efficiency, redundant computation