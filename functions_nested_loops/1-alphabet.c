#include "main.h"

/**
 * print_alphabet  - Entry point
 *
 * Return: void
 */
void print_alphabet(void)
{

	char c;
	for (int i = 0; i < 10; i++)
	{
	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
	}
}
