#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
    char c = 65;
    short s = 200;
    unsigned int ui = 3000000000U; // 3'000'000'000U
    long l = 65537L;
    long long ll = 12345678908642LL;

    printf("char = %hhd, %d, %c\n", c, c, c);
    printf("short = %hhd, %hd, %d\n", s, s, s);
    // %hhd는 signed char이므로 overflow 되어 -56이 나와야 하는데 안나오고 200으로 정상적으로 표시됨. 왜?

    printf("unsigned int = %u, %d\n", ui, ui);
    printf("long = %ld, %hd\n", l, l);
    printf("long long = %lld, %ld\n", ll, ll);

    return 0;
}