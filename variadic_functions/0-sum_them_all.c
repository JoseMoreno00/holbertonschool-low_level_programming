#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sum of all its parameters.
 * @n: n
 * Return: Return the sum of all integrer values
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list arguments;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(arguments, int);
	}
	va_end(arguments);
	return (sum);
}
