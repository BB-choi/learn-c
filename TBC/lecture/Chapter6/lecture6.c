#include <stdio.h>
#include <stdbool.h>

int main()
{
    int i;
    /* i = 5;
    i == 5;
    5 = i; // 5는 L-value로 사용될 수 없으므로 error
    5 == i; */

    // while (i = 5) {/* do something */};     // i = 5 라는 expression의 value는 5 --> true로 간주해서 while문 안으로 들어간다.
    // while (i == 5) {/* do something */};

    /* _Bool boolean_true = (2 > 1);
    _Bool boolean_false = (1 > 2);
    // 내부적으로는 정수형으로 처리가 된다.

    printf("True is %d\n", boolean_true);
    printf("False is %d\n", boolean_false);

    printf(boolean_true ? "true" : "false");    // "true"
    printf("\n");
    printf(boolean_false? "true" : "false");    // "false" */

    bool bt = true;
    bool bf = false;

    printf("\n");
    printf("Ture is %d\n", bt);     // 정수형으로 출력 1
    printf("False is %d\n", bf);    // 0

    return 0;
    
}