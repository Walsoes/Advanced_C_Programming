#include <stdio.h>

int main()
{

    int ch = 0; // store ch from stdin as INT

    while ((ch = getchar()) != EOF)
    {
        printf("%c", ch);
    }
    return 0;
}

