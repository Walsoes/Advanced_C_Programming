#include <stdio.h>

int summa(int num)
{
    static int sum = 0;

    sum += num;

    return sum;
}

int main(int argc, char const *argv[])
{
    printf("%d ", summa(25));
    printf("%d ", summa(15));
    printf("%d ", summa(30));

    return 0;
}
