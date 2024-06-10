#include <math.h>
#include <stdarg.h>
#include <stdio.h>

// #include "../headers/other.h"

double average(double v1, double v2, ...)
{
    va_list parg;
    double sum = v1 + v2;
    double value = 0.0;

    int count = 2;
    va_start(parg, v2); // v2 last fixed argument (Start after this argument)

    while ((value = va_arg(parg, double)) != 0.0)
    {
        sum += value;
        ++count;
    }

    va_end(parg);

    return sum / count;
}

double sample_stddev(int count, ...)
{
    double sum = 0;

    va_list args1;
    va_start(args1, count);

    va_list args2;
    va_copy(args2, args1);

    for (int i = 0; i < count; i++)
    {
        double num = va_arg(args1, double);
        sum += num;
    }

    va_end(args1);

    double mean = sum / count;
    double sum_sq_diff = 0;

    for (int i = 0; i < count; i++)
    {
        double num = va_arg(args2, double);
        sum_sq_diff += (num - mean) * (num - mean);
    }

    va_end(args2);

    return sqrt(sum_sq_diff / count);
}

int addingNumbers(int count, ...)
{
    va_list funcArgs;

    int sum = 0;

    va_start(funcArgs, count); // v2 last fixed argument (Start after this argument)

    for (int i = 0; i < count; i++)
    {
        sum += va_arg(funcArgs, int);
        if (i != 0)
            printf("%d\n", sum);
    }

    va_end(funcArgs);

    return sum;
}