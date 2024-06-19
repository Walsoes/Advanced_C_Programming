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

typedef struct
{
    int key;
    struct other_data;
} record;

int record_compare(void const *a, void const *b)
{
    return (((record *)a)->key - ((record *)b)->key);
}

int record_compareDesc(void const *a, void const *b)
{
    return (((record *)b)->key - ((record *)a)->key);
}

int main()
{
    int arraySize = 5;
    record *array = NULL;

    array = (record *)malloc(arraySize * sizeof(record));
    if (array == NULL)
    {
        puts("Memallocation failed");

        exit(1);
    }

    int (*func)(int a, int b);

    array[0].key = 10;
    array[1].key = 15;
    array[2].key = 25;
    array[3].key = 20;
    array[4].key = 30;

    qsort(array, arraySize, sizeof(record), record_compareDesc);

    printf("Sorted array: ");
    for (size_t i = 0; i < arraySize; i++)
    {
        printf("%d ", array[i]);
        }

    free(array);

        return 0;
}