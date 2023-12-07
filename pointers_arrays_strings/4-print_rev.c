#include "main.h"

/**
 * print_rev - Print string but in reverse
 * @s: The spring to print
 * Return: Always 0
 */
void print_rev(char *s)
{
	int cont;

	cont = 0;

	while (*s != '\0')
	{
		cont++;
		s++;
	}
	while (cont > 0)
	{
		cont--;
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}

