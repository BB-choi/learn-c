#include <stdio.h>

/*
	10
	10 / 2 = 5, remainder = 0
	5 / 2 = 2, remainder = 1
	2 / 2 = 1, remainder = 0
	1 / 2 = 0, remainder = 1
*/

void print_binary(unsigned long n);
void print_binary_loop(unsigned long n);

int main()
{
    unsigned long num = 10;

    print_binary_loop(num);
    print_binary(num);



	return 0;
}

//Note: printing order is reversed!
// 반대순서 --> 계산결과를 배열에 미리 담아놓고 출력시 순서를 뒤집어서 출력 가능하다.
void print_binary_loop(unsigned long num)
{
    while(1)
    {
        int quotient = num / 2;
        int reaminder = num % 2;

        printf("%d", reaminder);    // remainder is 0 or 1

        num = quotient;
        if(num == 0) break;
    }

	printf("\n");
}

// 올바른순서
void print_binary(unsigned long num)
{

    int remainder = num % 2;

    if (num >= 2)
        print_binary(num / 2);
    
    printf("%d", remainder);

	return;
}