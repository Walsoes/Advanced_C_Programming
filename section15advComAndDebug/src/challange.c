#include <stdio.h>
#include <stdlib.h>


//int Debug = 0;


#ifdef DEBON
#define DEBUG(level,fmt, ...) if(Debug >= level) fprintf(stderr, fmt, __VA_ARGS__)
#else
#define DEBUG(level, fmt, ...) /* Nothing */
#endif


int main()
{
    puts("Hello world!");
    return 0;
}