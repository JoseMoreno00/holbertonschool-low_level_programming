#include "main.h"
#include "stdio.h"

/**
 * _puts - Print a string
 * @str: A string
 * Return: Always 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
