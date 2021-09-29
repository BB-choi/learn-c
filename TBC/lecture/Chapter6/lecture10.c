#include <stdio.h>

int main()
{
    /* 
        +=, -=, *=, /=, %=
     */

    int i = 1024;

    // 퍼포먼스 차이? 속도, 어셈블리어로 되어있는 코드 확인
    // 어셈블리 확인 (최적화 하기) - 디버그모드로 실행 - 오른쪽버튼 - 오픈 디스어셈블리 뷰
    // https://devblogs.microsoft.com/cppblog/visual-studio-code-c-july-2021-update-disassembly-view-macro-expansion-and-windows-arm64-debugging/
    i = i + 10;
    i += 10;

    i %= 4;

    i = i * (1 + 2);
    i *= 1 + 2;
    i *= (1 + 2);   // Check precendence

    for (int i = 0; i < 10; i += 2)
        ; 


    return 0;
}