#include <stdio.h>

int main()
{
    int num, sum = 0;
    // int status;

    printf("Enter an integer (q to quit) : ");
    
    // status = scanf("%d", &num);         // return value of scanf() ==> 입력받은 변수의 개수가 몇개인지
    // q를 입력하면 정수로 입력받을 수 없으므로 저장되지 않는다 --> 입력받은 변수가 0개

    // while (status > 0)
    // while (status == 1)                 // equality operator
    while (scanf("%d", &num) == 1)                 // equality operator
    {
        // sum = sum + num;
        sum += num;

        printf("Enter an integer (q to quit) : ");
        // status = scanf("%d", &num);
    }

    printf("Sum = %d\n", sum);

    // TODO : C- style shortcut

    return 0;
}