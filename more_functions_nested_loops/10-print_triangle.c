#include "main.h"

/**
 *print_triangle - print a triangle of n characters
 *
 *@size: Size of triangle
 *Return: void
 */
void print_triangle(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		int j;

		for (j = 0; j < size; j++)
		{
			if (j < size - i - 1)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
