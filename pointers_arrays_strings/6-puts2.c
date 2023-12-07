#include "main.h"
#include <stdio.h>
/**
 * puts2 - puts numbers of the string
 * @str: string whit numbers
 * Return:0
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;

		if (*str + 1 == '\0')
		{
			break;
		}
	}
	_putchar(10);
}
