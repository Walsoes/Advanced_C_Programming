#include <stdio.h>

#define PUT(c) puts((c))

int main() {
    
    PUT("nm är bra för att se vilka variabler är definerade och eller oanvända");
    PUT("ldd visar vilka dll och dependencies en executable har");
    return 0;
}


#include <stdio.h>
#include <stdlib.h>


int Debug = 0;


#ifdef DEBON
#define DEBUG(level,fmt, ...) if(Debug >= level) fprintf(stderr, fmt, __VA_ARGS__)
#else
#define DEBUG(level, fmt, ...) /* Nothing */
#endif


int main()
{
    
    return 0;
}