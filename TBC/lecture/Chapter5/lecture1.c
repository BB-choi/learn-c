#include <stdio.h>

int main()
{
    int n = 1;
    // printf("2\n");
    // printf("3\n");
    // ...

/* label:
    printf("%d\n", n);
    n = n + 1;

    if(n == 10) goto out;

    goto label;
    
out: */

    while (n < 3) 
    {
        printf("%d\n", n);
        n = n + 1; // 변하는 조건이 반드시 필요
    }


    return 0;
}