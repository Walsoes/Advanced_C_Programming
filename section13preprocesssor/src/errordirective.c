#include <stdio.h>

/* // #pragma GCC poison printf
#pragma GCC warning "hello"
#pragma GCC error "what"
#pragma message "ok" */

// incomplete code
#error *** Jason - Function incomplete. fix before using ***

// Compiler-dependent code
#include <float.h>
#include <limits.h>
#if (INT_MAX != 32767)
#error *** This file only works with 16-bit int.
#error Do not use this compiler ***
#endif

// Conditionally-compiled code
#ifdef OPT_1
#define OPT_2
#elif defined OPT_2
/* Do option 2 */
#else
#error *** You must define one of OPT_1 or OPT_2 ***
#endif

#line 23 linenum

#line linenum

int main()
{

    return 0;
}
