#include "main.h"
/**
 * _puts_recursion - Print a String
 * @s: string
 * Return: string
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar(10);
}
