#include <stdio.h>

int main()
{
    /*
		 1. Intoduce getchar(), putchar()
		 2. Use while loop to process character sequences
		 3. Filter a specific character
		 4. Convert numbers to asterisks
		 5. Lower characters to Upper characters
	*/

    char ch;
    // int ch; 해도 같은 결과

    // ch = getchar(); // buffer // 글자 하나를 가져온다 - 정수로 아스키코드를 가져오면 화면에 출력해준다.
    // putchar(ch);    // 한 글자를 화면에 출력

    // 문자열을 어떻게 처리할 것인가?
    // while(ch != '\n') // Use '\n' to find the end of a sentence
    // 이게 문자열의 끝이구나, -> while문 종 료
    while((ch = getchar()) != '\n')
    {
        /* if(ch == 'f' || ch == 'F')
            ch = 'X';

        // if(ch == 'F'), else if (ch == 'F)
            // ch = 'X'; */
        
        /* // for (int i = '0'; i <= '9'; ++i)
        //     if (ch == i)
        //         ch = '*';

        // if(ch == '0')
        //     ch = '*';

        // if (ch >= '0' && ch <= '9')
        //     ch = '*'; */

        if (ch >= 'a' && ch <= 'z') // 'A' = 65, 'a' = 97
            ch -= 'a' - 'A';
        else if (ch >= 'A' && ch <= 'Z')
            ch += 'a' - 'A';

        putchar(ch);

        // ch = getchar();
    }

    putchar(ch);

    return 0;
}