#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

char *getenv(char const *name);

int main()
{
    char *str = NULL;

    assert((str = getenv("HOME")) != NULL);
    printf("Value of \"HOME\" Enviroment variable : %s\n", str);

    assert((str = getenv("PATH")) != NULL);
    printf("Value of \"PATH\" Enviroment variable : %s\n", str);

    assert((str = getenv("LOGNAME")) != NULL);
    printf("Value of \"LOGNAME\" Enviroment variable : %s\n", str);
   
    assert((str = getenv("JASON")) != NULL);
    printf("Value of \"JASON\" Enviroment variable : %s\n", str);


    return 0;
}

