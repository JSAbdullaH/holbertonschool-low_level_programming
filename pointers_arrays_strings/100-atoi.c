#include "main.h"
#include <limits.h>

/**
 * _atoi - convert string to integer
 * @s: string input
 *
 * Return: integer value
 */
int _atoi(char *s)
{
	int sign = 1;
	long result = 0;
	int found_digit = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			found_digit = 1;
			result = result * 10 + (*s - '0');

			if (result * sign > INT_MAX)
				return (INT_MAX);
			if (result * sign < INT_MIN)
				return (INT_MIN);
		}
		else if (found_digit)
			break;
		s++;
	}

	if (!found_digit)
		return (0);

	return ((int)(result * sign));
}
