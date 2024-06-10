#include <math.h>
#include <stdarg.h>
#include <stdio.h>

#include "../headers/other.h"

int main()
{

    double v1 = 10.5, v2 = 2.5;
    int num1 = 6, num2 = 5;
    long num3 = 12L, num4 = 20L;

    printf("Average = %.2f\n", average(v1, 3.5, v2, 4.5, 0.0));
    printf("Average = %.2f\n", average(1.0, 2.0, 0.0));
    printf("Average = %.2f\n", average((double)num2, v2, (double)num1, (double)num3, (double)num4, 0.0));

    printf("%f\n", sample_stddev(4, 25.0, 27.3, 26.9, 25.7));

    int result = addingNumbers(4, 10, 20, 30, 40);
    if (result > 0)
        puts("Success!");

    return 0;
}
