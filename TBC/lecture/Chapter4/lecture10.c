#include <stdio.h>
#include <inttypes.h> // intmax_t

int main()
{
    /* multiple inputs with blank separators */

    // int i;
    // float f;
    // char str[30];
    // scanf("%d %f %s", &i, &f, str); // Note % is absent in front of str
    // printf("%d %f %s\n", i, f, str);


    /* character */
    // char c;
    // scanf("%c", &c);    // try blank
    // printf("%i\n", c);  // blank is 32 // ascii 코드 출력


    /* Unsigned as signed */
    // unsigned i;
    // scanf("%i", &i);    // try negative number
    // printf("%i\n", i);


    /* Unsigned as unsigned */
    // unsigned i2;
    // scanf("%u", &i2);      // try negative number
    // printf("%u\n", i2);


    /* floating point numbers */
    // l for double for %f, %e, %E, %g
    // double d = 0.0;
    // scanf("%lf", &d);       // lf, try E notation 
    // // (scientific notation 가능하다) 123.4e-2 --> 1.234000

    // // scanf("%f", &d);       
    // // print --> 0.00 사이즈가 맞지 않음
    // // float d = 0.0; 으로 바꾸면 문제가 생기지 않음
    // printf("%f\n", d);      // f


    /* width */
    // char str[30];
    // scanf("%5s", str);  // width
    // printf("%s\n", str);


    /* h modifier */
    // char i;
    // scanf("%hhd", &i);  // try large numbers
    // printf("%i\n", i);


    /* integer with characters */
    // int i;
    // scanf("%i", &i);    // try '123ab', '123a456'
    // printf("%i\n", i);


    /* j modifier */
    // intmax_t i;
    // scanf("%ji", &i);
    // printf("%ji", i);


    /* Regular characters 정규식*/
    // int a, b;
    // scanf("%d,%d", &a, &b);     // try blank seperator only --> 문제가 생김
    // 123,456 같은 식으로 입력. a에는 123 b에는 456이 들어간다.
    // 빈칸을 추가하면 빈칸을 무시하고 입력받는다 (오류예방) --> "%d ,%d" 이런식으로
    // scanf("%d ,%d", &a, &b);
    // scanf("%d, %d", &a, &b);
    // scanf("%d-%d", &a, &b);
    // scanf("%dA%d", &a, &b);
    // printf("%d %d\n", a, b);


    /* char receives blank */
    // int a, b;
    // char c;
    // scanf("%d%c%d", &a, &c, &b);    // try 123 (blank) 456 
    // printf("%d|%c|%d", a, c, b);    // | is operator


    // sentences?, getchar(), fgets(), etc.

    /* return value of scanf() */
    // int a, b;
    // int i = scanf("%d%d", &a, &b); // 아이템을 몇 개 입력받았는가를 return
    // printf("%d", i);


    /* *modifier for printf() */
    // int i = 123;
    // int width = 5; // from script file, scanf, etc.
    // printf("Input width : ");
    // scanf("%d", &width);
    // printf("%*d\n", width, i);


    /* *modifier for scanf() */
    int i;
    scanf("%*d%*d%d", &i); // %*d는 무시된다. 입력은 3개 모두 받아야 되며 3번째에 입력받은것이 i로 들어간다. supress
    // 입력 구분기호 : 빈칸 또는 줄바꿈(기본)
    printf("Your third input = %d", i); 

    return 0;
}