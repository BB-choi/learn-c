#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    // char fruit_name; // stroes only one character.

    // 배열 : 같은 데이터 타입의 저장공간을 여러개 확보
    char fruit_name[40];

    printf("What is your favorite fruit?\n");

    // scanf("%c", &fruit_name); // be careful with & --> 주소를 가져오기 위해서 사용
    scanf("%s", fruit_name); // fruit_name[40]자체가 주소이므로 &을 붙일 필요가 없음

    // printf("You like %c!\n", fruit_name);
    printf("You like %s!\n", fruit_name);

    return 0;
}