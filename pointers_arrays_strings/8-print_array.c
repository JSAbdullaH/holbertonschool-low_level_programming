#include "main.h"

/**
 *print_array - print an array of integers
 *
 *@a: pointer to first integer
 *@n: number of elements in array
 *Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
