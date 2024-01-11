#include "main.h"

/**
 * sr - returns the natural square root of a number
 * @n: number >= 0
 * @x: possible root
 */

int sr(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x * x < n)
		return (sr(n, x + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number given.
 * Return: the natural square root of n.
 * If n does not have a natural square root, the function should return -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sr(n, 2));
}
