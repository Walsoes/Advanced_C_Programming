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

double srq2(int num, int num2)
{
    return num * num;
}

int power2(float power2, float exponent)
{
    int result = 1;

    if (exponent == 0)
    {
        return result;
    }
    else
    {

        for (int i = 0; i < exponent; i++)
        {
            result = result * power2;
        }
        return result;
    }
}

typedef void FuncType(int);
typedef void FuncType2(int, int);

void (*func_ptr)(int a, int b);

int main()
{

    FuncType2 *funcTwoArgs = NULL;
    FuncType *funcPtr = NULL;

    funcTwoArgs = power2;

    printf("Address of function somedisplat is \n");
    int result =((int (*)(int, int))(*funcTwoArgs))(10, 3);


    printf("10 power2 3 = %d\n", result);

    return 0;
}