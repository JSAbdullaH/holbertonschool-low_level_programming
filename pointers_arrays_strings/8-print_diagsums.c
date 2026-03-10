#include "main.h"

/**
 * print_diagsums - prints the sums of the diagonals of a square matrix
 * @a: pointer to the matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - 1 - i)];
}
_putchar('S');
_putchar('u');
_putchar('m');
_putchar('1');
_putchar(':');
_putchar(' ');
_putnbr(sum1);
_putchar('\n');
_putchar('S');
_putchar('u');
_putchar('m');
_putchar('2');
_putchar(':');
_putchar(' ');
_putnbr(sum2);
_putchar('\n');
}
