#include <stdio.h>
#include <string.h> // strlen();
#include <stdbool.h>

#define WIDTH   25
#define NAME    "Jeong-Mo Hong"
#define ADDRESS "Seoul, Korea"

void print_multiple_chars(char c, int n, bool print_newline);
void print_centered_string(char str[]);
// ()안에 뭐가 들어갈지 선언 하지 않고 프로토타입을 만들어도 빌드가 된다.
// 정의할때 말해줘도 된다. (과거 ==> 현재는 권장 아님)

// (void) 넣어줄 수도 있다 ()와 (void)는 다르다. --> 컴파일러 입장에서는 다르게 생각함

// 어떤 경우에는 (char, int, bool) (char[]) 이런식으로 해 줄수도 있다.
// 변수 이름이 없는데도 build잘 된다. 프로토타입에서는 사용을 안하므로 이름이 없어도 된다.
// 선언(프로토타입)에서는 없어도 된다. 자료형만 있으면 된다.

int main()
{
    // 작동 시작시에 main() 함수로부터 시작
    
    print_multiple_chars('*', WIDTH, true);  // actual argument / parameter
    // argument 인수, 인자
    // argument(인자)로 무엇이 들어가는지, 기능이 뭔지 추측
    // 아 bool 은 print_newline이구나 ("definition"에 가서 보면서)

    print_centered_string(NAME);
    print_centered_string(ADDRESS);
    print_centered_string("I love you");

    print_multiple_chars('*', WIDTH, false);

    return (0);
}

// 함수의기능을 정의하는 입장에서는 여러가지가 들어올 수 있다.
// 어떤 값이 들어오느냐에 따라 들어오는 것이 달라진다. --> 함수를 "매개변수화"했다.
// 매개변수에 뭐가 들어오는지 명시해 주는 것이 좋다.

// 함수를 호출하는 쪽에서는 특정한 값(value)들을 넣어주고 있다
// 매개변수에 어떠한 argument를 넣어준다.

// 받는 쪽에서는 parameter
// 넘겨주는 쪽에서는 argument 

// 프로토타입만 있어도 compile 할 수 있다 (;로 끝나는 한 줄) --> 컴파일 에러는 안난다.
// 컴파일 단계에서는 prototype만 가지고 compile, linking 단계에서 실제 몸체가 이렇게 되어있네, 끼워맞추자.
// 반환값(어떤 자료형의 자료인지) 함수명 (프로토타입);
// 프로토타입만 있어도 컴파일은 된다. (빌드 : 컴파일 + 링킹)
void print_multiple_chars(char c, int n, bool print_newline) 
// parameter 매개변수
// formal (argument/parameter)
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
