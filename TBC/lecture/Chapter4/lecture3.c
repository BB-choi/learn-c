#include <stdio.h>

int main()
{
    // int a = 1;
    // int int_arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, };

    // printf("%i %i %i\n", int_arr[0], int_arr[1], int_arr[9]);

    // printf("%i\n", int_arr[10000]); // error

    // *********************************************************************

    char c = 'a';
    char str1[10] = "Hello"; // null character
    char str2[10] = {'H', 'i'};

    printf("%c\n", c);
    printf("%s", str1);
    printf("%s\n", str2);
    // // HelloHi 
    // // str1이 \0을 만나면 더이상 출력을 하지 않는다 10만큼 전부 출력하는 것은 아니다.

    printf("%hhi %hhi %hhi %hhi %hhi\n", str2[0], str2[1], str2[2], str2[3], str2[4]);
    // 배열처럼 출력하면 null character를 만나도 강제로 출력 가능

    // char str3[10] = "Hello, World"; // array size is not enough
    char str3[20] = "Hello, \0World";
    printf("%s\n", str3); // null character를 만나면 무시
    printf("%hhi\n", str3[10]); // 실제로 메모리에 저장은 되어 있음.
    printf("%c\n", str3[10]);


    return 0;
}