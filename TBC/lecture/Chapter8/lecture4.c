#include <stdio.h>

int main()
{
    int count = 0;
    while (1)
    {
        printf("Current count is %d. Continue? (y/n)\n", count);

        int c = getchar();

        // if(getchar() == 'n') // no도 
        if (c == 'n')
            break;
        else if (c == 'y')
        {
            // while (getchar()!='\n')// 첫번째 글자만, 줄바꿈 미포함
            //     continue;

            count++;
        }
        else
        {
            printf("Please input y or n\n");

            // while(getchar() != '\n')
            //     continue;
        }

        while (getchar() !='\n')
            continue;
    }
    

    return (0);
}