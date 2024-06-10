#include <math.h>
#include <stdbool.h>
#include <stdio.h>

long long convertDecimalToBinary(int n);

#define BLUE 4
#define GREEN 2
#define RED 1
#define BLACK 0

#define YELLOW (RED | GREEN)
#define MAGENTA (RED | BLUE)
#define CYAN (GREEN | BLUE)
#define WHITE (RED | GREEN | BLUE)

void setBit(int *num, int bitPos);

struct windowBitField
{
    unsigned short int : 6;
    unsigned short int isTransparent : 1;
    unsigned short int showBorder : 1;
    unsigned short int fillColor : 3;
    unsigned short int borderColor : 3;
    unsigned short int borderStyle : 2;
};

struct box_props
{
    bool opaque : 1;
    unsigned int fill_color : 3;
    unsigned int : 4;
    bool show_border : 1;
    unsigned int border_color : 3;
    unsigned int border_style : 2;
    unsigned int : 2;
};

void show_settings(const struct windowBitField *ptr)
{
    printf("isTransparent:  %hu\n", ptr->isTransparent);
    printf("showBorder:  %hu\n", ptr->showBorder);
    printf("fillColor:  %hu\n", ptr->fillColor);
    printf("borderColor:  %hu\n", ptr->borderColor);
    printf("borderStyle:  %hu\n", ptr->borderStyle);
}

int main()
{
    int *gay;

    printf("Size: %zu", sizeof(*gay));

    struct windowBitField window = {false, true, MAGENTA, WHITE, 2};

    show_settings(&window);

    printf("\n\n\n");

    window.isTransparent = true;
    window.showBorder = true;
    window.fillColor = BLUE;
    window.borderColor = BLACK;
    window.borderStyle = 1;
    show_settings(&window);
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
