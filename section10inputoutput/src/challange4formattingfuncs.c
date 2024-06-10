#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isEven(const int num);
int isPrime(const int num);

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <filename/path>\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    else
    {

        FILE *fp = NULL;
        int numb = 0;

        fp = fopen(argv[1], "r");
        if (fp == NULL)
        {
            fprintf(stderr, "Error opening %s", argv[1]);
            exit(EXIT_FAILURE);
        }
        puts("Reading numbers from file:");
        while (fscanf(fp, "%d", &numb) != EOF)
        {
            if (isPrime(numb))
            {
                printf("Prime number found: %d\n", numb);
            }
            else if (isEven(numb))
            {
                printf("Even number found: %d\n", numb);
            }
            else
            {
                printf("Odd number found: %d\n", numb);
            }
        }

        fclose(fp);
    }

    return 0;
}

int isEven(const int num)
{
    return (num % 2 == 0) ? 1 : 0;
}

int isPrime(const int num)
{
    if (num < 1)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {

        for (int i = 2; i <= num / 2; i++)
        {
            if ((num % i) == 0)
                return 0;
        }
        return 1;
    }
}