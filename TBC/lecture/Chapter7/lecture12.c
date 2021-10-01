#include <stdio.h>

int main()
{
    char c;
    while((c = getchar()) != '.')
    {
        printf("You love ");

        switch (c)      // Note : integer types only // char, int 같은 정수형만 switch사용가능
        {
            case 'a': 
            case 'A':
                printf("apple");
                break;
            case 'b': 
            case 'B' :
                printf("baseball");
                break;
            case 'c': 
            case 'C':
                printf("cake");
                break;
            default:
                printf("nothing");
                // break;
        }

        printf(".\n");

        while(getchar() != '\n')
            continue;       // 첫글자만 switch문으로 들어감
    }

    // TODO: upper letters? (usetolower()?)

    return 0;

}