#include "main.h"

/**
* _print_rev_recursion - Prints a string in reverse using recursion.
* @s: Pointer to the string to be printed in reverse.
* Description: This function prints the characters of the input string 's'
* in reverse order recursively until the null terminator '\0'
* is encountered. It uses recursion to navigate through the
* string from the end to the beginning. After printing all
* characters in reverse order, it stops at the null terminator
* Return: None (void).
*/

void _print_rev_recursion(char *s)

{
if (*s == '\0')

{
return;
}

_print_rev_recursion(s + 1);

putchar(*s);
}

