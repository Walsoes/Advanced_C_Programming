#include <stdio.h>
#include <stdlib.h>

union mixed {
    char c;
    float f;
    int i;
};

union number {
    int x;
    double y;
};

void foo(union number *n)
{
    n->x = 3;
}

int main()
{

    // union mixed x; // CAN ONLY HOLD ONE DATATYPE
    union number *value = (union number *)malloc(sizeof(union number));

    printf("Value of integer %f\n", value->y);

    foo(value);

    printf("Value of integer %d\n", value->x);

    return 0;
}
