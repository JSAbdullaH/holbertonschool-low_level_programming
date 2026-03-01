#include "main.h"

/**
 *print_square - print a square of n characters
 *
 *@size: of square
 *Return: void
 */
void print_square(int size)
{
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (j = 0; j < size; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
}
