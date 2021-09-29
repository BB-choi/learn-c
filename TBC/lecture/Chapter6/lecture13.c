#include <stdio.h>

int main()
{
    const int secret_code = 337;
    int guess = 0;

    /* printf("Enter secret code : ");
    scanf("%d", &guess);

    while (guess != secret_code)
    {
        printf("Enter secret code : ");
        scanf("%d", &guess);
    } */
    // 같은 기능이 무조건 한 번은 실행된다
    // 조건을 비교하기 전에 무조건 실행

    do
    {
        printf("Enter secret code : ");
        scanf("%d", &guess);
    } 
    while (guess != secret_code);
    

    printf("Good!");

    return 0;

}