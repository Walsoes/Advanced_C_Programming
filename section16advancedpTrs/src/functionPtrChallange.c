#include <stdio.h>
#include <stdlib.h>

// int Debug = 0;

#ifdef DEBON
#define DEBUG(level, fmt, ...)                                                                                         \
    if (Debug >= level)                                                                                                \
    fprintf(stderr, fmt, __VA_ARGS__)
#else
#define DEBUG(level, fmt, ...) /* Nothing */
#endif

int addition(int a, int b)
{
    return a + b;
};
int subtract(int a, int b)
{
    return a - b;
};
int multiply(int a, int b)
{
    return a * b;
};
int division(int a, int b)
{
    if (b == 0)
    {
        fprintf(stderr, "Cannot divide by Zero\n");
        exit(EXIT_FAILURE);
    }

    return a / b;
};

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    puts("");
}

int *performOp(int *a, int *b, int size, int (*operation)(int, int));

int main()

{
    int array1[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int array2[] = {38, 27, 87, 63, 59, 223, 132, 1, 19, 7};

    puts("Arrays before operations:");
    printArray(array1, 10);
    printArray(array2, 10);

    puts("Which operation to you want to perform?");
    unsigned int choice = 0;

    int *result = NULL;
    while (choice != 5)
    {
        puts("1.Add");
        puts("2.Subtract");
        puts("3.Multiply");
        puts("4.Divide");
        puts("5.None ...");
        printf("Enter choice: ");
        scanf("%u", &choice);

        if (choice == 5)
            break;

        switch (choice)
        {
        case 1:
            // Code to execute if value is 1
            result = performOp(array1, array2, 10, addition);
            printArray(result, 10);
            break;
        case 2:
            result = performOp(array1, array2, 10, subtract);
            printArray(result, 10);
            break;
        case 3:
            result = performOp(array1, array2, 10, multiply);
            printArray(result, 10);
            break;
        case 4:
            result = performOp(array1, array2, 10, division);
            printArray(result, 10);
            break;
        case 5:
            exit(EXIT_SUCCESS);
        default:
            // Code to execute if value doesn't match any case
            printf("Value is not 1, 2, 3, 4 or 5\n");
            break;
        }
        
        if (result != NULL)
            free(result);
    }

    return 0;
}

// performs the given operation on all elements of the arrays A and B
int *performOp(int *a, int *b, int size, int (*operation)(int, int))
{

    int *resultArr = NULL;
    resultArr = (int *)calloc(size, sizeof(int));
    if (resultArr == NULL)
    {
        fprintf(stderr, "Memory allocation failed i performOp\n");
        exit(1);
    }

    for (int i = 0; i < size; i++)
    {
        resultArr[i] = operation(a[i], b[i]);
    }

    return resultArr;
}