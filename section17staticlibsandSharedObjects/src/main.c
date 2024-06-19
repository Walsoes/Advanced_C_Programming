#include <stdio.h>
#include <stdlib.h>


#include "../headers/myLib.h"
//int Debug = 0;


#ifdef DEBON
#define DEBUG(level,fmt, ...) if(Debug >= level) fprintf(stderr, fmt, __VA_ARGS__)
#else
#define DEBUG(level, fmt, ...) /* Nothing */
#endif


int main()
{
    fun();
    return 0;
}