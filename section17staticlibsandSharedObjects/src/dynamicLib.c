#include <stdio.h>
#include "../headers/myLib.h"

void fun(void)
{
    printf("fun() called from a dynamic library");
}


%PATH%
//windows
//gcc -g -fPIC main.c -shared -o lib_mylib.dll 



/usr/lib/ e.g /usr/lib/libthread.so
//Linux
//gcc -g -fPIC main.c -shared -o lib_mylib.dll 

 1979  gcc -g -fPIC dynamicLib.c -shared -o lib_mydynamiclib.so
 1980  gcc -I ../headers/ -c main.c main2.o
 1981  gcc -I ../headers/ -c main.c -o main.o
 1982  gcc -o main.out main.o -L /home/walsoe/C/Advanced_C_Programming/section17staticlibsandSharedObjects/src -l lib_mydynamiclib 
 1983  gcc -o main.out main.o -L /src -l lib_mydynamiclib 
 1984  gcc -o main.out main.o -L /src -lib_mydynamiclib 
 1985  gcc -o main.out main.o -L /src -l section17staticlibsandSharedObjects/src/lib_mydynamiclib 
 1986  gcc -o main.out main.o -L /src -l section17staticlibsandSharedObjects/src/lib_mydynamiclib.so 
 1987  gcc -o main.out main.o -L /src -l src/lib_mydynamiclib 
 1988  gcc -o main.out main.o -L ./src -l ./lib_mydynamiclib 
 1989  gcc -o main.out main.o -L ./src -l lib_mydynamiclib 
 1990  gcc -o main.out main.o -L ./src -l /home/walsoe/C/Advanced_C_Programming/section17staticlibsandSharedObjects/src/lib_mydynamiclib 
 1991  gcc -o main.out main.o -L /home/walsoe/C/Advanced_C_Programming/section17staticlibsandSharedObjects/src -l /home/walsoe/C/Advanced_C_Programming/section17staticlibsandSharedObjects/src/lib_mydynamiclib 
 1992  gcc -I ../headers -c main.c main.o
 1993  gcc -I ../headers -c main.c -o main.o
 1994  gcc -o main2 -main.o -l _mydynamiclib
 1995  gcc -o main2 main.o -l _mydynamiclib
 1996* gcc -o main2 main.o -L  -l_mydynamiclib
 1997  gcc -o main2 main.o -L ../headers -l _mydynamiclib
 1998  ./main2
 1999  export LD_LIBRARY_PATH=/home/walsoe/C/Advanced_C_Programming/section17staticlibsandSharedObjects/headers:$LD_LIBRARY_PATH
 2000  ./main2