#include "main.h"

/**
* get_bit - Returns the value of a bit at a given index.
* @n: The number.
* @retrieve_index: The index of the bit to retrieve
* (starting from 0).
* Return: The value of the bit at the given index,
* or -1 if an error occurred.
*/

int get_bit(unsigned long int n, unsigned int retrieve_index)

{
if (retrieve_index >= sizeof(unsigned long int) * 8)
return (-1);

unsigned long int shifted = n >> retrieve_index;

int bit_value = shifted & 1;

return (bit_value);

}
