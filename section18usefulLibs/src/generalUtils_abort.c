#include <stdio.h>
#include <stdlib.h>

void abort(void);

int main()
{
    FILE *fp;

    fp = fopen("somefile.txt", "rb");

    if (fp == NULL)
    {
        printf("Going to abort the program\n");
        abort();
    }

   fprintf(fp,"Going to close File \n");

    fclose(fp);

    return 0;
}
