#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 41

int main()
{
    // int sprintf(char *string, const char *format, char **vars); unsafe doesnt check lenght of buffer.

    // int fprintf(FILE *stream, const char *format, ...)  can use stderr as FILE stream...

    // fscanf(FILE *fp,const char *format [,arguments,...]);

    FILE *fp = NULL;
    int buff;

    fp = fopen("/home/walsoe/C/Advanced_C_Programming/section10inputoutput/src/bajs.txt", "r");

    while (fscanf(fp, "%d", &buff) != EOF)
    {
        printf("%d ", buff);
    }

    fclose(fp);
else if (isPrime(numb))
            {
                
            }
    // int sscanf(const char *str,const char * control_string [arg_1,arg_2,...]);
    // sscanf(buffer, "%s %d", name, &age);

    /* char *str = "Henrik Kung 35";
    char name[10], title[10];
    int age = 0, ret = 0;

    ret = sscanf(str, "%s %s %d", name, title, &age);

    printf("Name: %s\n", name);
    printf("Title: %s\n", title);
    printf("Age: %d\n", age);
 */


   // int fflush(FILE *fp) 
    // causes ant unwritten data in the output buffer to be sent to the outputfile | called flushing buffer 
    //| cleans the vuffer (making empty) if it has been loaded with any other data already
    return 0;
}