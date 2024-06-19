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

int main()
{
    int num = 24;
    int *ptr1 = NULL;
    int **ptr2 = NULL;

    ptr1 = &num;

    ptr2 = &ptr1;

    printf("Num: %d %d %d\n", num, *ptr1, **ptr2);

    printf("Adress of a = %u\n", &num);
    printf("Adress of a = %u\n", ptr1);
    printf("Adress of a = %u\n", *ptr2);


    
    printf("Adress of a = %d\n", ptr1);
    printf("Adress of a = %d\n", *ptr2);


    printf("Adress of a = %d\n", &ptr1);
    printf("Adress of a = %d\n", ptr2);



    printf("Value or **ptr: %u, adress: %u\n", ptr2, &ptr2);






    return 0;
}