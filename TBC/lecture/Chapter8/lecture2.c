#include <stdio.h>

int main()
{
    int c;
    
    /* while ((c = getchar()) != EOF)  // End Of File
    // EOF (stdio.h)에 -1로 정의되어 있음
    // 더 이상 입력할게 없다고 운영체제가 알려주면 -1 을 return 한다.
    // ctrl + z 누르면 종료, ctrl + c 운영체제가 강제종료
        putchar(c); */


    //  stream 
    while (1)
    {
        c = getchar();
        printf("%d\n", c);
        if (c == EOF)
        break;
    }
    

    return 0;
}