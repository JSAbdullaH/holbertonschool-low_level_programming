#include "main.h"

/**
 *_abs  - any negitve to pos
 *
 * @n: the int to abs
 * Return: n
 */
int _abs(int n)
{
    if (n < 0)
    {
    n = n * -1;
    return(n);
    }
    else
    return(n);
}