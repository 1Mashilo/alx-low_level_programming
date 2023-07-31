#include "main.h"

/**
* factorial - Returns the factorial of a given number.
* @n: The number for which factorial is to be calculated.
* Description:
* This function calculates the factorial of the input number 'n'.
* If 'n' is lower than 0, the function returns -1 to indicate an error.
* The factorial of 0 is considered 1.
* Return: The factorial of 'n' as an integer.
*/
int factorial(int n)
{
if (n < 0)

{
return (-1);
}

if (n == 0)

{
return (1);
}

return (n * factorial(n - 1));
}
