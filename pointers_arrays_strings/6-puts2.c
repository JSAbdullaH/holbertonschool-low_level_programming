#include "main.h"

/**
 *puts2 - prints every other character of a string
 *
 *@str: pointer to first character of string
 *Return: void
 */
void puts2(char *str)
{
	int i;

	if (str == NULL)
		return;

	for (i = 0; str[i] != '\0'; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
