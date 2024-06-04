#include <stdio.h>
#include <stdlib.h>

static double insideFile = 25.5;

float entireProgram = 10.5;

static int function2()
{
    return 5;
}

int main()
{
    auto int blockScope = 10;

    blockScope++;

    printf("blockScope %d", blockScope);

    static float a = 30;

    register int varre = 15;

    printf("entireProgram: %f", entireProgram);
    printf("insideFile: %lf", insideFile);
    printf("varre: %d", varre);

    printf("function2: %d", function2());

    return 0;
}
