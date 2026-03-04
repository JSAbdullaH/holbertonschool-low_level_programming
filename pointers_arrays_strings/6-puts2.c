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

	for (i = 0; str[i] != '\0'; i = i +2)
	{
		if (str[i] != '\0')
		_putchar(str[i]);
		}
	_putchar('\n');
}