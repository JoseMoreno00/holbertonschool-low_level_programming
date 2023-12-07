#include "main.h"
/**
 * _sqrt_recursion - A fuction that write the natural square root of a number
 * @n: N
 * Return: return the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	return (natural_sqrt_recursion(n, 0));
}

/**
 * natural_sqrt_recursion - find a natural value of n
 * @n: number to calculate square root
 * @i: i
 * Return: square root results
 */
int natural_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (natural_sqrt_recursion(n, i + 1));
}
