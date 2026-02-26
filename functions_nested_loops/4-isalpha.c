#include "main.h"

/**
 * _isalpha  - print the char is alphabet or not
 *
 * @c: the char to check
 * Return: 1 if c alphabet , 0 othgrwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
