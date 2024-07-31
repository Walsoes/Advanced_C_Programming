#include <stdio.h>
#include <stdlib.h>

void sign_off(void);
void too_bad(void);

int atexit(void (*funcPtr)(void));

int main()
{
    int n = 0;

    atexit(sign_off); // CALLED IMPLICITLLLY WHEN RETURNING TO MAIN MOTHERFUCKER

    puts("Enter an Integer: ");

    if (scanf("%d", &n) != 1)
    {
        puts("That's no INTEGER!!");
        atexit(too_bad);
        exit(EXIT_FAILURE);
    }

    return 0;
}

void sign_off()
{
    puts("Signing off now...");
}

void too_bad()
{
    puts("...");
}