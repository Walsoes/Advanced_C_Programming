#include <stdio.h>
#include <stdlib.h>

#include <assert.h>
#include <string.h>

void printSun(int *array, int size)
{
    static int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    printf("%d ", sum);
}

int main()
{

    int size;

    printf("Size of array is:");
    scanf("%d", &size);

    int newArr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d in the array:\n", i + 1);
        scanf("%d", &newArr[i]);
    }

    printSun(newArr, 5);

    return 0;
}
