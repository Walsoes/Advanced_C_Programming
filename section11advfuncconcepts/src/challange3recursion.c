#include <stdio.h>
#include <stdlib.h>



int sumOfNumber(int n)
{
    int result = 0;
    if (n == 1)
        return 1;
    else
        result = n + sumOfNumber(n - 1);

    return result;
}



int main()
{

    int result = factorial(5);
    int num = 5;
    int result2 = sumOfNumber(num);
    //  printf("Factorial of 5 is %d\n", result);
    printf("Sum of numbers 1 to %d: %d\n", num, result2);

    //    up_and_down(1);

    return 0;
}

void up_and_down(int n)
{
    printf("Level %d: n location %p\n", n, &n);
    if (n < 4)
    {
        up_and_down(n + 1);
    }
    printf("LEVEL %d: n location %p\n", n, &n);
}