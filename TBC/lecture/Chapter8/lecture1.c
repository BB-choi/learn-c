#include <stdio.h>
#include <conio.h> // windows, _getch(), _getche()

int main()
{
    char c;

    // while ((c = getchar()) != '.')
    // while ((c = _getche()) != '.') // 버퍼를 사용하지 않는 경우, e echo
    while ((c = _getch()) != '.') 
    // e가 없으면 사라진다.
    // deprecated 되었으므로 getch()대신 _getch()를 사용할 것
        putchar(c);
    
    return 0;
}