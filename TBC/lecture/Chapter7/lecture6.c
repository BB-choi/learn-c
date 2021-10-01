#include <stdio.h>
#include <stdbool.h>

int main()
{
    unsigned num, div;
    // int isPrime = 0; // flag, try bool type 내 변수의 상태를 임시로 표현
    // C언어는 보통 flag를 int로 표현
    bool isPrime;

    scanf("%u", &num);

    /* 
        TODO: Check if num is a prime number
        ex) num is 4, try num % 2, num % 3
        ex) num is 5, try num % 2, num % 3, num % 5
    */

   isPrime = true;

    // for(int div = 2; div < num; div++)
    // for(unsigned div = 2; div < num; div++)
    /* for (div = 2; div < num; div++)
    {
        if(num % div == 0)
            isPrime = false;
    } */
    
    /* for (div = 2; div < num; div++)
    {
        if(num % div == 0)
        {
            isPrime = false;
            printf("%u is divisible by %u.\n", num, div); //약수
        }
            
    } */

    /* 제곱근까지만 구해보면 된다. */
    for (div = 2; (div * div) <= num; div++)
    {
        if(num % div == 0)
        {
            isPrime = false;
            
            if(num == div * div)
                 printf("%u is divisible by %u.\n", num, div);
            else
                printf("%u is divisible by %u and %u.\n", num, div, num/div); //약수
        }
            
    }


    /* 
    아래는 내가 풀어본 것
   div = 2;
    while (div < num) 
    {
        if (num % div == 0)
            {isPrime = false; break;}
        else
            div ++;
        
    } */


    if(isPrime)
        printf("%u is a prime number.\n", num);
    else
        printf("%u is not a prime number.\n", num);
}