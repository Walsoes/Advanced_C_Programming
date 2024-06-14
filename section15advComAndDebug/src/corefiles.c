#include <stdio.h>
#include <stdlib.h>

// int Debug = 0;

#ifdef DEBON
#define DEBUG(level, fmt, ...)                                                                                         \
    if (Debug >= level)                                                                                                \
    fprintf(stderr, fmt, __VA_ARGS__)
#else
#define DEBUG(level, fmt, ...) /* Nothing */
#endif

int main()
{
    /*   int *p = malloc(8);
      *p = 100;
                     // Accessing heapmemory whichh has been freed
      free(p);

      printf("hehe %d", *p);
      //----------------------- */
    /*     char *str = NULL;

        str = "GfG";          //

        *(str + 1) = 'n';  */// trying to write to read-only mem
    //_----------------------------

    int arr[2] = { 1,2 };
    arr[3] = 10;  // accesing out of bound array

    //  int n = 2;
  //   scanf("%d", n); 
      // will lead to SIGSEGV

        /* int *p;
        printf("%d", *p); */

    return 0;
}
