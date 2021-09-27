#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> // malloc()

struct Mystruct
{
    int i; // 4 byte
    float f; // 4 byte
};

int main()
{

    /* 1. sizeof basic types */

    // int a = 0;
    // unsigned int int_size1 = sizeof a;
    // unsigned int int_size2 = sizeof(int);
    // unsigned int int_size3 = sizeof(a);

    // // 이식성을 높이기 위해서 size_t 사용 (unsigned int 와 같음)
    // size_t int_size4 = sizeof(a);
    // size_t float_size = sizeof(float);

    // printf("Size of int type is %u bytes.\n", int_size1);
    // printf("Size of int type is %zu bytes.\n", int_size4);
    // printf("Size of int type is %zu bytes.\n", float_size);

    /* 2. sizeof arrays */

    // int int_arr[30]; // int arr[0] = 1024; ...
    // // 주소. 맨 앞을 가리킨다.

    // // 컴파일시에 크기 지정

    // int *int_ptr = NULL;
    // int_ptr = (int*)malloc(sizeof(int) * 30); // int_ptr[0] = 1024;...
    // // malloc memory allocation
    // // 120bytes의 공간을 할당하고 메모리주소(120bytes)를 대표하는 주소를 int_ptr로 

    // // 컴파일시에는 사이즈를 알 수 없고, 런타임에 결정된다.

    // printf("Size of array = %zu bytes\n", sizeof(int_arr)); // 120 bytes
    // printf("Size of pointer = %zu bytes\n", sizeof(int_ptr)); 
    // // 4 bytes라고 하는데, 8bytes가 나온다 (64bit system이라 그런 듯 하다.)


    /* 3.  sizeof character array */

    // char c = 'a'; // 1byte
    // char string[10]; // maximally 9 character + '\0' (null character)

    // size_t char_size = sizeof(char);
    // size_t str_size = sizeof(string);

    // printf("Size of char type is %zu bytes.\n", char_size); // 1 bytes
    // printf("Size of string type is %zu bytes.\n", str_size); // 10 bytes

    /* 4. sizeof structure */

    printf("%zu\n", sizeof(struct Mystruct)); // 8

    return 0;
}