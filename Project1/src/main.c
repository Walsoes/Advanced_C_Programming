#include <stdio.h>
int main() {
    static int i=5;
    static int k = 5;
    if (i--)
    {
        printf("%d ",i);
        main();
    }

    

    return 0;
}


