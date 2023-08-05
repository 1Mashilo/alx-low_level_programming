#include "binary_to_uint.h"

/**
* binary_to_uint - Converts a binary number to an unsigned int.
* @binary_number: Pointer to a string of 0 and 1 chars.
* Return: The converted number, or 0 if there are
* invalid chars or binary_number is NULL.
*/


unsigned int binary_to_uint(const char *binary_number)

{

unsigned int converted_number = 0;

if (!binary_number)
return (0);

while (*binary_number)
{
if (*binary_number != '0' && *binary_number != '1')

return (0);

converted_number = (converted_number << 1) + (*binary_number - '0');
binary_number++;
}

return (converted_number);
}

