#include <stdio.h>

int sum = 5;

extern void display();

int main(int argc, char const *argv[])
{

    for (int i = 0; i < sum; i++)
    {
        display();
    }

    return 0;
}
