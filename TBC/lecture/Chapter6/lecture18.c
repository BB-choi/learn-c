#include <stdio.h>

int compute_pow(int base, int exp); //prototype

int main()
{
    // 3 4
    //  3*3*3*3 = 81

    int base, exp, /* i, */ result;

    // scanf("%d %d", &base, &exp);
    while(scanf("%d %d", &base, &exp) == 2)
    {
        // result = 1;
        // for (i = 0; i < exp; ++i) 
        //     result *= base;

        result = compute_pow(base, exp);

        printf("Result = %d\n", result);
    }

    return 0;
}

int compute_pow(int base, int exp) // 링킹과정에서 이 부분을 찾아서 연결해준다.
{
    int i, result;
    
    result = 1;
    for (i = 0; i < exp; ++i) 
        result *= base;

    return result;
}