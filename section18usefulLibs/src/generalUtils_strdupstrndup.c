
#include <stdio.h>
#include <string.h>

// a non standard function which may not be available in stadard library in C

void show_array(const int ar[], int n);

char *strdup(const char *string);
char *strndup(const char *s, size_t n);

int main()
{
    char *p1 = "Jason";
    char *p2 = NULL;

    p2 = strdup(p1);

    printf("Duplicated string is : %s\n", p2);


    p2 = strndup(p1, sizeof(char) * 3);

    printf("Duplicated string is : %s\n", p2);
    return 0;
}
