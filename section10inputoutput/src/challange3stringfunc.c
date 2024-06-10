#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t getline(char **buffer, size_t *size, FILE *stream);

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s <char> <filename/path>", argv[0]);
        return 1;
    }
    else
    {

        char *buffer = NULL;
        char *searchPtr = NULL;
        size_t bufsize = 256;
        size_t nread = 0;
        const char searchChar = argv[1][0];

        FILE *fp = NULL;
        fp = fopen(argv[2], "r");
        if (fp == NULL)
        {
            perror("fopen");
            exit(EXIT_FAILURE);
        }

        buffer = (char *)malloc(bufsize * sizeof(char));
        if (buffer == NULL)
        {
            fclose(fp);
            perror("Unable to Allocate buffer\n");
            exit(1);
        }

        while ((nread = getline(&buffer, &bufsize, fp)) != -1)
        {
            if ((searchPtr = strchr(buffer, searchChar)) == NULL)
            {
                continue;
            }
            else
            {
                puts(buffer);
            }
        }
        free(buffer);
        fclose(fp);
    }

    return 0;
}