// main.c 로 파일명
#include "my_print_functions.h"
#include <stdio.h>
// 여기서도 printf를 처리하므로?

/* 
    gcc -o main.c main 
    으로 main.exe 실행가능 (h파일 따로 지정 안해줘도)

    gcc -c main.c
    gcc -c my_header_functions.c
    gcc -o main(programname) main.o my_header_functions.o ?
 */

/* void print_hello()
{
    printf("Hello\n");
    // many more lines
}

void print_hi()
{
    printf("Hi\n");
    // many more lines
}

void print_str(char* str)
{
    printf("%s\n", str);
    // many more lines
}

// assume that we have many more longer functions */

int main()
{
    print_hello();
    print_hi();
    print_hello();
    print_hi();
    print_str("No one lives forever.");
    print_str("Valar morghulis");

    printf("Hello!");

    return (0);
}