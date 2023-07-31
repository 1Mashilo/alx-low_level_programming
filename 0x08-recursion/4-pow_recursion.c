#include "main.h"

/**
* _pow_recursion - Returns the value of x raised
* to the power of y using recursion.
*
* @x: The base number.
* @y: The exponent.
*
* Description:
* This function calculates the value of x raised to the power of y recursively.
* If y is lower than 0, the function returns -1 to indicate an error.
* The function uses the formula x^y = x * x^(y-1)
* for y > 0 and x^y = 1 for y = 0.
*
* Return: The result of x raised to the power of y as an integer.
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}

if (y == 0)
{
return (1);
}

return (x * _pow_recursion(x, y - 1));
}

