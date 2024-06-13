#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sumOfNumber(int n)
{
    int result = 0;
    if (n == 1)
        return 1;
    else
        result = n + sumOfNumber(n - 1);

    return result;
}

int findGCD(int num, int num2);

// char *reverseString(const char *input, int counter, int length);

// char *reverseString(char *input, int length);

char *reverseString(const char *);

int main()
{

    /* int result = factorial(5);
    int num = 5;
    int result2 = sumOfNumber(num);
    //  printf("Factorial of 5 is %d\n", result);
    printf("Sum of numbers 1 to %d: %d\n", num, result2); */

    /*    int num1 = 0, num2 = 0;
       //    up_and_down(1);
       puts("Enter number 1:");
       scanf("%d", &num1);
       puts("Enter number 2 :");
       scanf("%d", &num2);
       int result = findGCD(num1, num2);
       printf("GCD: %d\n", result); */

    char *string1 = "Henrik";

    printf("string before reveresed: %s\n", string1);

    char *revString = reverseString(string1);

    printf("Reversed: %s\n", revString);

    return 0;
}

/* int findGCD(int num, int num2)
{

    if (abs(num - num2) == num)
    {
        return num;
    }
    if (num == 0 || num2 == 0)
    {
        fprintf(stderr, "num1 or num 2 cannot be 0 \n");
        return -1;
    }
    else
    {
        (num > num2) ? (num = num - num2) : (num2 = num2 - num);

        findGCD(num, num2);
    }
} */

/* char *reverseString(const char *input, int counter, int length)
{
    static char output[20];
    static int i = 0;
    if (length == 0)
    {
        output[counter] = '\0';
        return output;
    }
    else
    {
        output[i] = input[length - 1];

        i++;
        reverseString(input, counter + 1, length - 1);
    }
} */

void swap(char *a, char *b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}
char *reverseString(const char *input)
{
    int length = strlen(input);
    char *output = (char *)malloc((length + 1) * sizeof(char));
    if (output == NULL)
    {
        printf("Memory allocation failed\n");
        return NULL;
    }


    for (int i = 0; i < lenght/2; i++)
    {
        swap(input[i],input(lenght-1) 
    }
   /*  void reverse(char *input, char *output, int length)
    {
        if (length == 0)
        {
            *output = '\0';
            return;
        }
        *output = input[length - 1];
        reverse(input, output + 1, length - 1);
    }

    reverse(input, output, length); */
    return output;
}

/* char *reverseString(char *input)
{
    char reversed[20];
    int length = strlen(input);
    int i = 0;
    for (i = 0; i < length; i++)
    {
        reversed[i] = input[length - 1 - i];
    }

    reversed[length] = '\0';

    return reversed;
} */

/* char *reverseString(const char *input)
{
    int length = strlen(input);
    char reversed[length]; /* (char *)malloc((length + 1) * sizeof(char)); // Allocate memory for the reversed
string

    if (reversed == NULL) // Check if memory allocation was successful
    {
        printf("Memory allocation failed\n");
        return NULL;
    } */

/*     for (int i = 0; i < length; i++)
    {
        reversed[i] = input[length - 1 - i]; // Correctly assign characters
    }
    reversed[length] = '\0'; // Null-terminate the reversed string

    return reversed;
} */ /* * /

    void up_and_down(int n)
{
    printf("Level %d: n location %p\n", n, &n);
    if (n < 4)
    {
        up_and_down(n + 1);
    }
    printf("LEVEL %d: n location %p\n", n, &n);
}

void swap(char a, char b)

{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
} */