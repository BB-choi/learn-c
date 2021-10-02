#include <stdio.h>

int main()
{
    /* printf("I love apple.\n");
    /* printf("I love apple.\n");
    // 출력방향을 > 재지정
    // .\lecture3.exe > output.txt */
    // .\lecture3.exe >> output.txt

    
    // 입력을 받아들이기
    char str[100];
    scanf("%s", str);
    printf("I love %s\n", str);
    // .\leccture3.exe < input.txt

    // printf("programming");
    // copy lecture3.exe test.exe

    // test.exe | lecture3.exe 
    // "I love programming"


    return (0);
}