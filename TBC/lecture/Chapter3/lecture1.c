#define _CRT_SECURE_NO_WARNINGS 
// properties에서 가능 (Visual Studio)
// VScode에서는 작동됨
#include <stdio.h>

int main()
{
    int i = 0;
    
    scanf("%d", &i); // & : ampersand, and
    // error C4996: This function or variable maybe unsafe.

    printf("Value is %d\n", i);

    return 0;
}