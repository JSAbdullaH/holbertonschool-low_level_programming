#include "main.h"

/**
 *print_last_digit  - print las digit of any number
 *
 * @n: the int to check
 * Return: l
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
		l = -(n % 10);
	else
		l = n % 10;
	_putchar ('0' + l);
	return (l);
}
