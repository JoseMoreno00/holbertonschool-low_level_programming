#include "main.h"
/**
 * puts_half - print half o a string
 * @str: string
 * Return: 0
 */
void puts_half(char *str)
{
	int count = 0;
	int i = 0;
	char *len = str;

	while (*len != '\0')
	{
		count++;
		len++;
	}

	for (i = count / 2; i < count; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
