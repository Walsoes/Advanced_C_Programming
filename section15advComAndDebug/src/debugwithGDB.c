#include <stdio.h>
#include <stdlib.h>

int Debug = 0;

#ifdef DEBON
#define DEBUG(level, fmt, ...)                                                                                         \
    if (Debug >= level)                                                                                                \
    fprintf(stderr, fmt, __VA_ARGS__)
#else
#define DEBUG(level, fmt, ...) /* Nothing */
#endif

struct date
{
    short int day;
    short int month;
    short int year;
};

union henrik
{
    short int lon;
    char banan;
};

struct date foo(struct date x)
{
    ++x.year;

    return x;
}

int main()
{

    struct date today = {32767, 32767, 32767};

   // int array[5] = {1, 2, 3, 4, 5};
    struct date *newdate, foo();
   // char *string = "test string";
 //   int i = 3;

    newdate = (struct date *)malloc(sizeof(struct date));
    newdate->month = 32768;
    newdate->day = 32768;
    newdate->year = 32768;

    newdate->year *= 2;

    union henrik super = {.lon = 33000};

    printf("Union Super: %d\n", super.lon);

    super.banan = 33000;

    printf("Union Super: %d %d\n", super.lon, super.banan);



    today = foo(today);

    free(newdate);

    return 0;
}