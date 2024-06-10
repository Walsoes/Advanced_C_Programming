#include <assert.h>
#include <setjmp.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

jmp_buf buf;

void myFunction()
{
    printf("in myFunction()\n");
    longjmp(buf, 1);

    printf("NEVER!!! myFunction()\n");
}

void errorRecovery()
{
    printf("Exeption thrown. Returning to setjmp\n");
    longjmp(buf, 1);
}

int main()
{
    int i = 100;

    while (!setjmp(buf))
    {
        printf("Hej\n");
        if (i == 0)
        {
            errorRecovery();
        }
        i--;
    }

    return 0;
}