#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// int Debug = 0;

#ifdef DEBON
#define DEBUG(level, fmt, ...)                                                                                         \
    if (Debug >= level)                                                                                                \
    fprintf(stderr, fmt, __VA_ARGS__)
#else
#define DEBUG(level, fmt, ...) /* Nothing */
#endif

int main()
{
    srand(time(0));

    

    for (int i = 0; i < 50; i++)
    {
        int num = rand();

        double randomFloat = (double)num / RAND_MAX;
        double scaled = (randomFloat - 0.5);
        printf(" %f ", scaled);
    }

    return 0;
}