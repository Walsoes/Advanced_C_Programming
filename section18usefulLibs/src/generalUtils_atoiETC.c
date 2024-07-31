#include <stdio.h>
#include <stdlib.h>

int atoi(char const *s);

double atof(char const *s);

double strtod(const char *str, char **str_end);

long int strtol(char const *s, char **end, int base);

int main()
{
    char a[10] = "123.456xyz", *end;
    double value = 0;
    value = strtod(a, &end);
    printf("Value = %.3lf\n", value);

    char b[10] = "365.25 7.0", *end2;

    float val = strtof(b, &end2);
    float val2 = strtof(end2, NULL);

    printf("first value: %.2f, second: %.2f\n", val, val2);

    char c[30] = "2030300 This is test";
    char *ptr = NULL;
    long ret;
    ret = strtol(c, &ptr, 10);
    printf("The number (unsigned ong integer) is %ld\n", ret); 
    printf("String part is |%s|\n", ptr); 


    // int value = atoi(a);

    //   double floating = atof(a);


    // sprintf(a, "%d", 45);

  //  printf("Value = %.2f\n", floating);

    return 0;
}
