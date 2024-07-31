
#include <stdio.h>
#include <string.h>

/* 
In C, size_t is an unsigned integer type used to represent the sizes of objects. The exact type of size_t can vary depending on the platform and compiler implementation, but it is typically defined as an alias for one of the standard unsigned integer types, such as unsigned int or unsigned long.

Characteristics of size_t:
Unsigned Type: size_t is always an unsigned type, meaning it can only represent non-negative values.
Platform Dependent: The actual underlying type of size_t can differ between platforms. On a 32-bit system, it might be unsigned int, while on a 64-bit system, it might be unsigned long or unsigned long long.
Defined in <stddef.h> and <stdint.h>: The size_t type is defined in these headers, which are part of the standard C library.
Usage of size_t:
It is commonly used for array indexing and loop counters.
It is the return type of the sizeof operator.
Functions in the C standard library, such as malloc, memcpy, and strlen, use size_t for size-related parameters. */

// NULL is a macro of a null pointer constant

int main() {
    size_t array_size = 10;
    int array[array_size];
    
    for (size_t i = 0; i < array_size; i++) {
        array[i] = i * i;
    }

    for (size_t i = 0; i < array_size; i++) {
        printf("Element %zu: %d\n", i, array[i]);
    }

    return 0;
}