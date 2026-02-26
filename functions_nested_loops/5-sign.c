#include "main.h"

/**
 * print_sign  - check the sign of number
 *
 * @n: the int to check
 * Return: 1 if great than 0 , 0 if its equal 0 , -1 if its negitive
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}
