#include <stdio.h>
#include <string.h> // strlen();
#include <stdbool.h>
// 일반화 : 더 많은 경우에 쉽게 작동
// 같은 기능이 여러번 나오면 안된다 (유지보수)

#define WIDTH   40
#define NAME    "Jeong-Mo Hong"
#define ADDRESS "Seoul, Korea"

// void print_bar(int n_stars);
// void print_blank(int n_blank);
void print_multiple_chars(char c, int n, bool print_newline);
void print_centered_string(char str[]);



int main()
{
    /* printf("*************************\n");
    printf("\tJeong-Mo hong\n");
    printf("\tSeoul, Korea\n");
    printf("*************************\n"); */

    // print_bar(WIDTH);

    // print_blank(10);

    // int n_blanks = 0;

    // print_multiple_chars('*', WIDTH); // 매개변수가 늘어남
    print_multiple_chars('*', WIDTH, true);
    // printf("\n"); --> // print_multiple_chars 에 변수 추가 (bool)

    /* n_blanks = (WIDTH - strlen(NAME)) / 2;
    print_multiple_chars(' ', n_blanks);
    printf("%s\n", NAME);

    n_blanks = (WIDTH - strlen(ADDRESS)) / 2;
    print_multiple_chars(' ', n_blanks);
    printf("%s\n", ADDRESS); */

    print_centered_string(NAME);
    print_centered_string(ADDRESS);
    print_centered_string("I love you");

    print_multiple_chars('*', WIDTH, false);

    // print_bar(WIDTH);

    return (0);
}

/* void print_bar(int n_stars)
{
    for(int i = 1; i <= n_stars; ++i)
        printf("*");
        // putchar('*');

    // int i = 1;
    // while(i <= n_stars)
    // {
    //     printf("*");
    //     i++;
    // }
    printf("\n");

}

void print_blank(int n_blank)
{
    // something to print
} */

void print_multiple_chars(char c, int n, bool print_newline)
{
    for(int i = 1; i <= n; ++i)
        printf("%c", c);    // putchar(c)

    if(print_newline)
        printf("\n");
}

void print_centered_string(char str[])
{
    int n_blanks = 0;

    n_blanks = (WIDTH - strlen(str)) / 2;
    print_multiple_chars(' ', n_blanks, false);
    printf("%s\n", str);
}
