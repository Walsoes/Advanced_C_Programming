#include <stdio.h>

#ifdef UNIX
#define DATADIR "/uxn1/data"
#else
#define DATADIR "\usr\data"
#endif 

int main()
{

#if MYDEF == 5
    printf("Hello");

#endif

    return 0;
}
