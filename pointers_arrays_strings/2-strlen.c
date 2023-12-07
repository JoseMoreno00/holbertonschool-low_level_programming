#include "main.h"

/**
 * _strlen - strin
 * @s: string
 * Return: Always
 */
int _strlen(char *s)
{
	int con = 0;

	while (*s != '\0')
	{
		con++;
		s++;
	}
	return (con);
}
