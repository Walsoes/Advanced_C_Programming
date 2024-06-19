#ifndef MYLIB_STRING_FUNCTIONS_H
#define MYLIB_STRING_FUNCTIONS_H

int amountOfCharInString(char *inputString, char searchChar);
char *removeCharsExpAlphabets(char *destination, char *inputString);
size_t strlen2(char *inputString);
char *strconcat(char *destination, const char *inputString);

#endif // !MYLIB_H_INCLUDED