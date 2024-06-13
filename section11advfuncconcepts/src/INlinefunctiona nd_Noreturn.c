

// inline use for small function that appear often. Defiention in header.-

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>
#include <string.h>

noreturn void func(void);

_Noreturn void foo(void)
{
    return 10;
}

void func(void)
{
   exit(1); //  printf("In func()...\n");

} // undefined bahavior as func() returns.

int main()
{
    func();

    foo();
    
    return 0;
}