#include <stdio.h>

/* #define PI 3.1415
#define CIRCLE_AREA(x) ((PI) * (x)*(x))

 */
// #define WARNING(...) fprintf(stderr, __VA_ARGS__)

// #define SQUARE(++x) //unfeined behaviour

#define FOO BAR
#define MISC(x) (printf("incrementing %d \n", (x)))

#define MAX(a, b) ((a) > (b) ? (a) : (b))

#define UpTo(i, n) for((i) = 0; (i) < (n);(i)++)

int main()
{
    /* double area = CIRCLE_AREA(4);
    printf("AREA IS %lf\n",area); */

    //  WARNING("%s: this program is here\n", "Henrik");

    int i = 0;

   // MISC(MAX(5, 7));

    UpTo(i, 5) MISC(i);

    return 0;
}