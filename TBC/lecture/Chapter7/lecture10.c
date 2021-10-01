#include <stdio.h>

int main()
{
    /* continue */
    /* for (int i = 0; i < 10; ++i)
    {
        if (i == 5)
            continue;
        
        printf("%d ", i);

        // if ( i != 5)
        //     printf("%d ", i);
    } */


    /* break */
    /* for(int i = 0; i < 10; ++i)
    {
        if (i == 5)
            break;
        // break를 포함하고 있는 첫번째 loop에서 나와버린다.
        
        printf("%d ", i);
    } */

    /* while and continue */
    /* int count = 0;
    while (count < 5)
    {
        int c = getchar();

        if(c == 'a')
            continue;

        putchar(c);

        count++;
    } */

    /* for and continue */
    /* for (int count = 0; count < 10; ++count)
    {
        int c = getchar();
        if(c == 'a')
            continue;
        putchar(c);
    }*/

    /* continue as a placeholder */
    // 하는건 없는데 자리를 차지할 수 있고.. 뭔가 들어갈 수 있다는 것을 보여줌
    /* while(getchar() != '\n')
        continue; // ; null statement가 들어간 것과 같은 효과 */

    /* Need to use continue? */
    /* char c;
    while ((c = getchar()) != '\n')
    {
        if (c == 'a')
            continue;
        putchar(c);

        // if(c != 'a')
        //     putchar(c);
        // 로 바꿔도 기능이 동일하다.
    } */

    /* break */
    // char c;
    // while ((c = getchar()) != '.')
    // {
    //     putchar(c);
    // }

    /* while(1)
    {
        char c = getchar();

        if (c == '.')
            break;

        putchar(c);
    } */

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == 5)
                break;
            // 다중 for문일경우 첫번째 loop를 깨고 나온다.
            
            printf("(%d %d)", i, j);
        }

        printf("\n");
    }





    return 0;
}