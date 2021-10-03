#include <stdio.h>

void my_func(int);

int main()
{
    my_func(1);
    // 재귀호출은 무한반복(while)을 만드려고 사용하는 것이 아니다.
    // 재귀호출을 무한히 사용하면 stack메모리가 꽉차서 오류종료(overflow)

    
    return (0);
}

// 실전에서 수학적 알고리즘을 구현할 때 재귀호출이 좋은 경우도 있다.
// 효율(프로그램 최적화, 빠른 작동) -> 일반적인 for문 사용
void my_func(int n)
{
    printf("Level %d, address of variable n = %p\n", n, &n);

    // my_func(n + 1);
    // TODO: stop condition
    // stop condition을 같이 정의해 주어야 한다.
    if(n <= 4)
        my_func(n + 1); // Level 5까지 진행

    // TODO: tail recursion
    // 증가했다가 다시 감소하는 경우
    printf("Level %d, address of variable n = %p\n", n, &n);
    // 감소하는 코드는 어디에도 없는데, 다시 돌아오는것
    // 꿈을계속 꾸다가 그 꿈을 깨고 깨고 깨고... 스택에 쌓였던 것을 빼고빼고빼고

}
