#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/* char *getType(void *datatype)
{
    // Attempt to interpret the data as a string
    char *isString = (char *)datatype;
    if (isprint(isString[0]) && isString[1] != '\0')
    {
        // Check if the data looks like a string
        int i = 0;
        while (isString[i] != '\0')
        {
            if (!isprint(isString[i]))
            {
                break;
            }
            i++;
        }
        // If we reach the end of the string and it is printable, it's a string
        if (isString[i] == '\0')
        {
            return "string";
        }
    }

    // If not a string, assume it's an integer
    return "int";
}
 */

#define SUM(x1, x2) ((x1) + (x2))

#define SQUARE(x) ((x) * (x))
#define CUBE(x) ((x) * (x) * (x))

#define IS_UPPER(c) ((c >= 'A' && c <= 'Z') ? 1 : 0)

#define IS_LOWER(c) ((c >= 'a' && c <= 'z') ? 1 : 0)

int main()
{
    int x1, x2 = 0;
    puts("Enter character:");
    char character = getchar();

    if (IS_UPPER(character))
    {
        puts("Char is UPPER");
    }else if (IS_LOWER(character))
    {
        puts("char is lower");
    } else
    {
        puts("Char is not in the alphabetaHANE");
    }

    puts("Enter x1:");
    scanf("%d", &x1);

    puts("Enter x2:");
    scanf("%d", &x2);

    int sum = SUM(x1, x2);
    printf("The sum is %d\n", sum);
    printf("the square is %d\n", SQUARE(x1));
    printf("The cube is %d\n", CUBE(x1));
    printf("The sum is %d\n", sum);
    printf("the square is %d\n", SQUARE(x1));
    printf("The cube is %d\n", CUBE(x1));
    printf("The sum is %d\n", sum);
    printf("the square is %d\n", SQUARE(x1));
    printf("The cube is %d\n", CUBE(x1));
    printf("The sum is %d\n", sum);
    printf("the square is %d\n", SQUARE(x1));
    printf("The cube is %d\n", CUBE(x1));


    // __LINE__ , __FILE__ CURRENT LINE and CURRENT FILE
    // __DATE__, __TIME__ compilation times
    // __STDC__ Is STANDARD C begin used

    return 0;
}