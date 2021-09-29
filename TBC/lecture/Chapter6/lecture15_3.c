#include <stdio.h>

#define NUM_ROWS 12
#define FIRST_CHAR 'A'
// #define LAST_CHAR 'K'

int main()
{
    int r; // row loop
    int c; // character loop

    for (r = 0; r < NUM_ROWS; ++r)
    {
        for (c = FIRST_CHAR + r; c < FIRST_CHAR + NUM_ROWS ; ++c)
            printf("%c ", c);
        printf("\n");
    }

    return 0;
}