#include "main.h"

/**
* _strlen_recursion - Returns the length of a string using recursion.
* @s: Pointer to the input string.
* Description: function calculates the length of the input string 's' recursiv
* It counts each character until it reaches the null terminator '\0',
* indicating the end of the string.
* @s: Pointer to the input string.
* Return: The length of the string as an integer.
*/
int _strlen_recursion(char *s)

{

if (*s == '\0')

{
return (0);
}

return (1 + _strlen_recursion(s + 1));
}
