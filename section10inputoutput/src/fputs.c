#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp = NULL;

    fp = fopen("somefile.txt", "w");

    int result = fputs("Hi! im gay", fp);

    printf("Result: %d", result);
    
    fclose(fp);

    return 0;
}