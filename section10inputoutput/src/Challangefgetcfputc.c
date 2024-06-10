#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    FILE *fp = NULL;
    int argsFlag = 0;
    char filename[255];

    if ((argc == 1))
    {
        printf("Please enter the path or name to a file:");
        scanf("%s", filename);

        fp = fopen(filename, "r");
        if (fp == NULL)
        {
            printf("Could not find %s try using full file path\n", filename);
            return 1;
        }
    }
    else
    {
        fp = fopen(argv[1], "r");
        if (fp == NULL)
        {
            printf("Couldnt open %s.\n Try whole filepath..", argv[1]);

            return 1;
        }
        argsFlag = 1;
    }

    FILE *tmp = NULL;

    int ch = fgetc(fp);

    tmp = fopen("tmp.txt", "w+");

    if (tmp != NULL)
    {

        if (islower(ch) != 0)
        {
            printf("charather was lower!\n");

            ungetc(ch, fp);

            while ((ch = fgetc(fp)) != EOF)
            {
                fputc(toupper(ch), tmp);
            }
        }
        else if (isupper(ch) != 0)
        {
            printf("charather was upper!\n");
            ungetc(ch, fp);

            while ((ch = fgetc(fp)) != EOF)
            {
                fputc(tolower(ch), tmp);
            }
        }
        fclose(fp);
    }
    else
    {
        printf("Could not open tmp file");
        return 1;
    }

    if (argsFlag == 1)
    {
        fp = fopen(argv[1], "w");
    }
    else
    {
        fp = fopen(filename, "w");
    }

    rewind(tmp);

    while ((ch = fgetc(tmp)) != EOF)
    {
        fputc(ch, fp);
    }

    fclose(fp);
    fclose(tmp);

    if (remove("tmp.txt") == 0)
        printf("tmp.txt deleted successfully");
    else
        printf("Unable to delete the file");

    return 0;
}
