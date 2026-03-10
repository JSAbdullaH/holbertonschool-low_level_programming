#include "main.h"

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: the number
 * Return: integer representing the square root of the number
 */
int _sqrt_recursion(int n)
{
if (n == 0)
{
return 0;
}
return _sqrt_recursion(n - 1);
}
