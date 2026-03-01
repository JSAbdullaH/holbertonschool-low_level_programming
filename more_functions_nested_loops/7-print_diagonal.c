#include "main.h"

/**
 *print_diagonal - print a diagonal line of n characters
 *
 *@n: Number of lines
 *Return: void
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int j;

		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
