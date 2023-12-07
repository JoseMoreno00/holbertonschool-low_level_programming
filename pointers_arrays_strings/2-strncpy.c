#include "main.h"
/**
 * _strncpy - strncpy
 * @dest: dest
 * @src: src
 * @n: n
 * Return: Dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest0 = dest;

	while (n > 0 && *src != '\0')
	{
		*dest++ = *src++;
		n--;
	}

	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}

	return (dest0);
}
