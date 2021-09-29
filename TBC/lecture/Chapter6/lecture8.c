#include <stdio.h>

int main()
{
    // Indefinite loop 한정되어져 있지 않은 loop vs. Counting loop 
    // 진입조건은 정해져있지만, 어떻게 종료할 것인지 정해져있지 않음
    /* while(1)
    {
        // do something
    } */

    /* 
        Counting loop
        1. Counter initialization
        2. Counter check
        3. Counter change 되지 않으면 무한루프 --> while문 자체가 indefinite loop
     */

    /* int i;

    i = 1;

    while (1 <= 10)     // Note: <=
    {
        printf("%d ",i);
        i++;
    }*/


    /* int i;

    for (i = 1; i <= 10; i++) {
        printf("%d ",i);
    } */

    /* for (int i = 1; i <= 10; i++)
        printf("%d ",i); */

    int i;
    
    for (i = 1; i <= 10; i++)
    {
        printf("dummy ");
        printf("%d ",i);
    }


    return 0;

}