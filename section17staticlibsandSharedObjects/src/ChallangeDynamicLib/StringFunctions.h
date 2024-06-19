#ifndef MYLIB_STRING_FUNCTIONS_H
#define MYLIB_STRING_FUNCTIONS_H

int amountOfCharInString(char *inputString, char searchChar);
size_t strlen2(char *inputString);
char *removeCharsExpAlphabets(char *destination, char *inputString);
char *strconcat(char *destination, const char *inputString);

#endif // !MYLIB_H_INCLUDED