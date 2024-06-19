#include <stdio.h>
#include <stdlib.h>

int atoi(char const *s);

double atof(char const *s);

int main()
{
    char a[10] = "100";
    int value = atoi(a);

    double floating = atof(a);

    printf("Value = %d\n", value);
    printf("Value = %.2f\n", floating);

    return 0;
}
