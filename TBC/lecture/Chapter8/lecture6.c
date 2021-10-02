#include <stdio.h>

long get_long(void);

int main()
{
    long number;

    while(1)
    {
        printf("Please input an integer between 1 and 100.\n"); // 2~99
        // long number = get_long(); // 정수 입력받음
        number = get_long();

        // number가 범위 안에 들어오는지 확인
        if (number > 1 && number < 100)
        {
            printf("OK. Thank you.\n"); 
            break;
        }
        else
            printf("Wrong input. Please try again.\n");
    }

    printf("Your input %d is between 1 and 100. Thank you.\n");
    /* printf("Please input an integer and press enter.\n");

    long input;
    char c;

    while (scanf("%ld", &input) != 1) 
    // ld에 맞는 숫자 하나가 들어오면 while로 들어오지 않고 나간다.
    // ld가 아닌 경우에는 while문 안으로 들어감.
    {
        printf("Your input - ");
        
        while ((c = getchar()) != '\n')
            putchar(c); // input left in buffer
        // 사용자의 입력이 scanf에 제대로 들어가지 않았다면, 그 내용이 버퍼에 남아있음.
        // 버퍼를 비우면서, 사용자에게 출력해줌
        
        printf(" - is not an integer. Please try again.\n");
    }

    printf("Your input %ld is an integer. Thank you.\n", input);
 */

    return (0);
}

long get_long(void)
{
    printf("Please input an integer and press enter.\n");

    long input;
    char c;

    while (scanf("%ld", &input) != 1) 
    {
        printf("Your input - ");
        
        while ((c = getchar()) != '\n')
            putchar(c); // input left in buffer
        
        printf(" - is not an integer. Please try again.\n");
    }

    printf("Your input %ld is an integer. Thank you.\n", input);

    return input;

}