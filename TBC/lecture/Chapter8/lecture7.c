#include <stdio.h>

int main()
{
    /* 
        Assume that your input is :
        Hello 123 3.14
     */

    // 어떤 데이터 타입으로 받아들일지에 따라서 같은 입력도 다르게 받아들인다.
    // getchar() 한글자 한글자로 받는다.
    // scanf 빈칸이 있으면 한 가지 항목을 다 입력했나보다, 끊어줌

    // 기본적 입력은 한 글자 한 글자 문자형태로 받아들인 후에
    // scanf printf를 문자형태로 받아들인 stream을 분석을해서
    // 원하는 형태로 받아들이고, 원하는 형태로 출력

    // 하지만 결국에는 문자형태가 아닌 2진수의 데이터 형태로 stream이 왔다갔다 한다.
    // 파일 입출력, 인터넷으로 데이터가 왔다갔다할때..

    char str[255];
    int i, i2;
    double d;

    scanf("%s %d %lf", str, &i, &d);
    printf("%s %d %f\n", str, i, d);    // hello 123 3.140000

    //  or  (see the difference)

    scanf("%s %d %d", str, &i, &i2);
    printf("%s %d %d\n", str, i, i2);
    // hello 123 3
    // .14 .이니까 숫자입력은끝났나보다 <- scanf가 더이상 받아드이지 않는다.

    // or (see the difference)

    // 이후에 buffer에 남아있는 내용은 얘가 처리해 준다.
    // 이 부분은 빈칸까지 그대로 출력해줄것(얘만 실행해봐라)
    char c;
    while ((c = getchar()) != '\n')
        putchar(c);
    printf("\n");

    return (0);
}