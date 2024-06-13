#include <stdio.h>
#include <stdlib.h>

void henrikARKUNG(void)
{
    printf("%s was called.\n", __func__);
}

int main()
{

#if (__STDC__ == 1)
    printf("Implementation is ISO-conforming.\n");
#else
    printf("Implementation is non ISO-conforming.\n");
#endif

printf("Filename \"%s\" is on line %d\n",__FILE__,__LINE__);
printf("Program last comiled at %s on %s\n", __TIME__,__DATE__);



    henrikARKUNG();
    return 0;
}