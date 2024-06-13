#include <stdio.h>

#define JUST_CHECKING
#define LIMIT 5

int main()
{
    int i = 0;
    int total = 0;

    for (i = 1; i < LIMIT; i++)
    {
        total += 2 * i * i + 1;

#ifdef JUST_CHECKING
        printf("i=%d, runnning total = %d\n", i, total);

#endif
    }
    printf("Grand total %d\n", total);

    return 0;
}
