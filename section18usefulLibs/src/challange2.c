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

#define MAXARR 50

void fillarray(double *ar, int n);
void qsort(void *base, size_t nmemb, size_t size, int (*compar)(const void *, const void *));
int comp_doubles(const void *, const void *);

void showarray(const double *ar,int n);

int main()
{
    srand(time(0));

    double arr[MAXARR];

    fillarray(arr, MAXARR);

    puts("Array before sorting: ");

    showarray(arr, MAXARR);
    puts("");

    qsort(arr, MAXARR, sizeof(double), comp_doubles);

    puts("Array after sorting: ");

    showarray(arr, MAXARR);
    
    return 0;
}

void fillarray(double *ar, int n)
{
    for (int i = 0; i < n; i++)
    {

        int first = rand();
        double second = (double)first / 100000;

        ar[i] = second;
    }
}


int comp_doubles(const void *p1,const void *p2)
{
    const double i1 = *(const double *)p1;
    const double i2 = *(const double *)p2;
    return i2 - i1;
}

void showarray(const double *ar,int n)
{
     for (int i = 0; i < n; i++)
    {
        printf("%.3f\n", ar[i]);
    }
}