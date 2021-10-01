#include <stdio.h>
#include <ctype.h>
/* 
    Reference link
    https://www.tutorialspoint.com/c_standard_library/ctype_h.htm
 */

int main()
{
    char ch;

    while((ch = getchar()) != '\n')
    {
        if (islower(ch))
            ch = toupper(ch);
        else if (isupper(ch))
            ch = tolower(ch);

        // if (isdigit(ch) != 0)
        if (isdigit(ch))
            ch = '*';


        putchar(ch);
    }

    putchar(ch);

    return 0;
}