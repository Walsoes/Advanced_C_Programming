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

int main()
{
    void apple = NULL;

    switch (setjmp(buf))
    {
    case 0:
        apple = *suspicious;
        break;
    case 1:
        printf("suspicious is indeed a bad pointer\n");
        break;
    default:
        exit(0);
    }
    return 0;

    longjmp(buf, 0);
}