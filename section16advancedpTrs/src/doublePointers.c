#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int Debug = 0;

#ifdef DEBON
#define DEBUG(level, fmt, ...)                                                                                         \
    if (Debug >= level)                                                                                                \
    fprintf(stderr, fmt, __VA_ARGS__)
#else
#define DEBUG(level, fmt, ...) /* Nothing */
#endif

void foo2(char **ptr)
{
    *ptr = malloc(255);
    strcpy(*ptr, "Hello World");
}

/* void foo(int **ptr)
{
    int a = 5;
    *ptr = &a;
} */

int main()
{
    /*     int *ptr = NULL;

        ptr = (int *)malloc(sizeof(int));
        *ptr = 10;

        foo(&ptr);

        printf("%d \n", *ptr);
         */

    char *ptr = NULL;

    foo2(&ptr);

    printf("%s\n", ptr);

    free(ptr);

    return 0;
}