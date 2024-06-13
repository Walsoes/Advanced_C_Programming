#include <stdio.h>
#include <stdlib.h>

#define DeclareSort(prefix, type)                                                                                      \
    static int _DeclareSort_##prefix##_Compare(const void *a, const void *b)                                           \
    {                                                                                                                  \
        const type *aa = a;                                                                                            \
        const type *bb = b;                                                                                            \
        if (*aa < *bb)                                                                                                 \
            return -1;                                                                                                 \
        else if (*aa > *bb)                                                                                            \
            return 1;                                                                                                  \
        else                                                                                                           \
            return 0;                                                                                                  \
    }                                                                                                                  \
                                                                                                                       \
    void prefix##_sort(type *a, int n)                                                                                 \
    {                                                                                                                  \
        qsort(a, n, sizeof(type), _DeclareSort_##prefix##_Compare);                                                    \
    }


DeclareSort(char, char)

    int main()
{

    char a[] = {'A', 'H', 'T', 'V', 'C', 'E'};
    int n = sizeof(a) / sizeof(a[0]);

    char_sort(a, n);

    for (int i = 0; i < n; i++)
    {
        printf("%c ", a[i]);
    }
    printf("\n");

    return 0;
}