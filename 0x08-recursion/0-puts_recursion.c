#include "main.h"
#include "stdio.h"

/**
* _puts_recursion - Prints a string followed by a new line using recursion.
* @s: Pointer to the string to be printed.
* Description: This function prints the characters of the input string 's'
*recursively until the null terminator '\0' is encountered.
*It uses the putchar() function to display each character.
*After printing the entire string, it adds a new line character
*to the output.
* Return: None (void).
*/

void _puts_recursion(char *s)

{

if (*s == '\0')

{
putchar('\n');
return;
}

putchar(*s);

_puts_recursion(s + 1);

}
