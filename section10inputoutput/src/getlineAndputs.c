#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// ssize_t getline(char **buffer, size_t *size, FILE *stream);

int main()
{
    char *buffer = NULL;
    size_t bufsize = 32;
    size_t characters;

    buffer = (char *)malloc(bufsize * sizeof(char));

    if (buffer == NULL)
    {
        exit(1);
    }

    printf("Type something: ");

    characters = getline(&buffer, &bufsize, stdin);

    printf("%zu characters were read.\n", characters);
    printf("You typed: '%s' \n", buffer);
    

     // NEVER USE GETS()
    
/*     char string[40];
    strcpy(string,"hello, how are you?");
    puts(string); //outpur string with \n
 */

    return 0;
}