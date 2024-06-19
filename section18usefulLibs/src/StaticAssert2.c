#include <stdio.h>
#include <assert.h>
#include <limits.h>

static_assert(CHAR_BIT == 8, "Char is 8 bits!"); // Assert precompeletion

int main()
{
    puts("Char is 8 bits!");

    return 0;
}