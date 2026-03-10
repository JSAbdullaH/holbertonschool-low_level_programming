#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: the number
 * Return: integer representing whether the number is prime
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return 0;
}
if (n == 2)
{
return 1;
}
if (n % 2 == 0)
{
return 0;
}
return is_prime_helper(n, 3);
}
