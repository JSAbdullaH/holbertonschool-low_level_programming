#include "main.h"

/**
 * sqrt_helper - recursive helper to find square root
 * @n: the target number
 * @guess: current value being tested
 * Return: square root if found, -1 if none
 */
int sqrt_helper(int n, int guess)
{
if (guess * guess == n)
return (guess);
if (guess * guess > n)
return (-1);
return (sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: the number
 * Return: natural square root or -1 if none exists
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
return (sqrt_helper(n, 1));
}
