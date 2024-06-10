#include <stdio.h>





int main()
{
    char ch = 0;

    while (isspace(ch = (char)getchar()));
            ungetc(ch,stdin);

    // return first char after a space        

    printf("char is %c\n", getchar());
    
    return 0;
}
