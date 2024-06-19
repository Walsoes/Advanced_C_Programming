#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>

/* /usr/lib/x86_64-linux-gnu/libm.so
/usr/lib/x86_64-linux-gnu/libm.so.6
/usr/lib32/libm.so.6 */

int main()
{
    void *handle = NULL;
    double (*cosine)(double) = NULL;
    char *error = NULL;

    handle = dlopen("/usr/lib/x86_64-linux-gnu/libm.so.6", RTLD_LAZY);

    if (!handle)
    {
        fputs(dlerror(), stderr);
        exit(EXIT_FAILURE);
    }

    dlerror();

    cosine = dlsym(handle, "cos");

    if ((error = dlerror()) != NULL)
    {
        fputs(error, stderr);
        dlclose(handle);
        exit(1);
    }

    printf("%lf\n", (*cosine)(2.0));

    dlclose(handle);

    return 0;
}