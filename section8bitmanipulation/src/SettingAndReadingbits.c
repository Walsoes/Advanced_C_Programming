#include <math.h>
#include <stdio.h>

long long convertDecimalToBinary(int n);

void setBit(int *num, int bitPos);

int main()
{
    int num, nthBit;

    printf("Enter a number:");
    scanf("%d", &num);
    printf("Enter an nth bit to check if its set and set it if not (0-31):");
    scanf("%d", &nthBit);

    printf("Number before setting %d bit: %d\n", nthBit, num);

    setBit(&num, nthBit);

    printf("number after setting %d bit: %d", nthBit, num);

    return 0;
}

void setBit(int *num, int bitPos)
{
    if (*num & (1 << bitPos))
    {
        printf("Bit is already set\n");
    }
    else
    {
        printf("Bit not set. Setting bit...\n");

        *num |= (1 << bitPos);
        printf("Bit set succesfully\n");
    }
}

long long convertDecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1;
    while (n != 0)
    {
        remainder = n % 2;
        n /= 2;
        binaryNumber += remainder * pow(10, i);
    }
    return binaryNumber;
}
