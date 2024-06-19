#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int Debug = 0;

#ifdef DEBON
#define DEBUG(level, fmt, ...)                                                                                         \
    if (Debug >= level)                                                                                                \
    fprintf(stderr, fmt, __VA_ARGS__)
#else
#define DEBUG(level, fmt, ...) /* Nothing */
#endif

/* typedef struct point
{
    int x;
    int y;

} POINT;

send(void *pData, int nLength, int type);

char *data = "blah";

send(data, strlen(data));

POINT p;
p.x = 1;
p.y = 2;
 */
int main()
{

    int aiData[3] = {100, 200, 300};

    void *pvData = &aiData[0];

    pvData += sizeof(int);

    printf("%d ", *(int *)pvData);

    /*  int i = 10;
     float f = 2.34;
     char ch = 'k';

     void *vptr = NULL;
     vptr = &i;
     printf("Value of i = %d\n", *(int *)vptr);

     vptr = &f;
     printf("Value of i = %.2f\n", *(float *)vptr);
     vptr = &ch;
     printf("Value of i = %c\n", *(char *)vptr); */

    /*    void *pvData = NULL;
       int *pvData = NULL;
       char *pvData = NULL;   // ALL POINTERS ARE 8 bytes superlarge
       float *pvData = NULL;
     */
    return 0;
}