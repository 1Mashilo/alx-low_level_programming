#include "main.h"

/**
*  _sqrt_recursion - Returns the natural square
*  root of a number using recursion.
*
* @n: The number for which the square root is to be calculated.
*
* Description:
* This function calculates the natural square root of the input number 'n'
* recursively using binary search method. If 'n' does not have a natural
* square root, the function returns -1 to indicate an error.
*
* Return: The natural square root of 'n' as an integer.
*/
int _sqrt_recursion(int n)

{

if (n < 0)

{
return (-1);
}

if (n == 0 || n == 1)

{
return (n);
}

int start = 1;

int end = n;

int mid, result;

while (start <= end)
{
mid = (start + end) / 2;

if (mid *mid == n)
{
return (mid);
}
else if (mid *mid < n)
{
start = mid + 1;
result = mid;
}
else
{
end = mid - 1;
}
}

return (result);
}

