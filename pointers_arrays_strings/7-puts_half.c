#include "main.h"

/**
 *swap_int - swap values of two integers
 *
 *@a: pointer to first integer
 *@b: pointer to second integer
 *Return: void
 */
void puts_half(char *str)
{
	int length = 0;
	int start;
	int i;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
		start = length / 2;
	else
		start = (length - 1) / 2;

	for (i = start; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
