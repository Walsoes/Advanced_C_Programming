//#include "StringFunctions.h"
#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>

/* /usr/lib/x86_64-linux-gnu/libm.so
/usr/lib/x86_64-linux-gnu/libm.so.6
/usr/lib32/libm.so.6 */

void errorCheckAndErrorClose(void *handle)
{
    if (!handle)
    {
        fputs(dlerror(), stderr);
        exit(EXIT_FAILURE);
    }

    dlerror();
}

int main()
{
    void *handle = NULL;
    int (*amountOfCharInString)(char *, char) = NULL;
    //   size_t (*strlen2)(char*) = NULL;
    char (*charcharchar)(char *, char *) = NULL;

    char *error = NULL;

    handle = dlopen("/home/walsoe/C/Advanced_C_Programming/section17staticlibsandSharedObjects/src/ChallangeDynamicLib/"
                    "lib_StringFunctions.so",
                    RTLD_LAZY);

    errorCheckAndErrorClose(handle);

    amountOfCharInString = dlsym(handle, "amountOfCharInString");

    errorCheckAndErrorClose(handle);

    printf("# of H-char: %d\n", (*amountOfCharInString)("HenrikHenrik", 'H'));

    charcharchar = dlsym(handle, "strconcat");

    errorCheckAndErrorClose(handle);

    char str1[100] = "This is ", str2[] = "programiz.com";

    (*charcharchar)(str1, str2);

    puts(str1);
    puts(str2);

    dlclose(handle);

    return 0;
}
