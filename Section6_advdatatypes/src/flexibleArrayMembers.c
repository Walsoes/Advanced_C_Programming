#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct flexibleArrayMembers
{
    int length;
    int array[];
};

struct flexibleArrayMembers *createArray(int length)
{
    struct flexibleArrayMembers *fam;

    fam = malloc(sizeof(struct flexibleArrayMembers) + length * (sizeof(int)));

    return fam;
}

int main()
{
    int len;

    printf("Enter size of array:");
    scanf("%d", &len);

    struct flexibleArrayMembers *ptr1 = createArray(len);

    for (int i = 0; i < len; i++)
    {
        ptr1->array[i] = i;
    }

    printf("middle element %d", ptr1->array[len / 2]);

    return 0;
}