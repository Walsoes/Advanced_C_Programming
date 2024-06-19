#include <stdio.h>
#include <stdlib.h>

// int Debug = 0;

#ifdef DEBON
#define DEBUG(level, fmt, ...)                                                                                         \
    if (Debug >= level)                                                                                                \
    fprintf(stderr, fmt, __VA_ARGS__)
#else
#define DEBUG(level, fmt, ...) /* Nothing */
#endif

void allocateMemort(int **ptr)
{
    int *ptr2 = (int *)malloc(sizeof(int));
    *ptr2 = 15;

    *ptr = ptr2;
}

int main()
{

    int *ptr1 = NULL;

    allocateMemort(&ptr1);

    printf("Value or *ptr: %d", *ptr1);

    free(ptr1);

    return 0;
}