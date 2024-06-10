#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    FILE *fp = NULL;

    if (argc == 1)
    {
        printf("Using stdin...\n");

        fp = stdin;
    }
    else if (argc == 2)
    {
        fp = fopen(argv[1], "r");
        if (fp == NULL)
        {
            printf("Couldnt open %s.\n Try whole filepath..", argv[1]);
            exit(EXIT_FAILURE);
        }
    } else
    {
        fprintf(stderr, "Usage: %s [FILENAME]\n",argv[0]);
        exit(EXIT_FAILURE);
    }

    int ch = 0;
    int words = 0, chars = 0;
    int inputRead = 0, inWord = 0;

    while ((ch = getc(fp)) != EOF)
    {
        inputRead = 1; // Mark that we have read at least one character
        chars++;

        if (isspace(ch))
        {
            if (ch == '\r')
            { // Check if \r is followed by \n (Windows EOL)
                int next_ch = getc(fp);
                if (next_ch != '\n')
                {
                    ungetc(next_ch, fp); // Not \r\n, put back the character
                }
                else
                {

                    chars--;
                }
            }
            else if (ch == '\n')
            {
                chars--;
            }

            if (inWord)
            {
                words++;
                inWord = 0; // Reset flag since we're at the end of a word
            }
        }
        else
        {
            inWord = 1; // Set flag since we're inside a word
        }
    }

    // Check if the last character was part of a word
    if (inWord)
    {
        words++;
    }

    printf("\n");

    /*     printf("Number of charachters: %d\n", chars);
        printf("Number of words: %d\n", words); */

    if (inputRead)
    {
        printf("Characters: %d\n", chars);
        printf("Words: %d\n", words);
    }
    else
    {
        printf("Input is empty.\n");
    }

    fclose(fp);

    return 0;
}
