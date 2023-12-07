#include "main.h"
#include <stdio.h>

/**
 * print_line - Simple, print a line or lines
 * @n: Number of caracters
 * Return: Always
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
