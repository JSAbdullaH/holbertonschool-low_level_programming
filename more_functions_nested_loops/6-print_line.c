#include "main.h"

/**
 *print_line - print a line of n characters
 *
 *@n: numbers of line that print
 *Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
