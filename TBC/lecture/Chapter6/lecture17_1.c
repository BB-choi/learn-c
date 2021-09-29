#include <stdio.h>

#define SIZE 5

int main()
{
    /* Motivation */
    /* int i1 = 0;
    int i2 = 1;
    int i3 - 2;
    // ...

    printf("%d\n", i1);
    printf("%d\n", i2);
    printf("%d\n", i3);
    // ... */

    int my_arr[SIZE];

    // prepare for array data

    for (int i = 0; i < SIZE; ++i) // index
    {
        // my_arr[i] = i;
        my_arr[i] = i * i;
        // 1 + 2; // dummy for debugging
    }

    // print array data
    for (int i = 0; i < SIZE; ++i)
        printf("%d ", my_arr[i]);
    
    // TODO: try debugger


    // for (int i = 0; i < SIZE; ++i) // index
    // {
    //     my_arr[i] = i * i;
    //     printf("%d ", my_arr[i]);
    // }
    // 같은 효과지만 my_arr[SIZE]의 [SIZE]가 매우 커지면 달라진다.
    // 쪼개서 하는 것이 비효율적으로 보일 수는 있지만, 나중에 보면 다르다.

    return 0;
}