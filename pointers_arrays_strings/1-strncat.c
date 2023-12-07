#include "main.h"
#include <string.h>
/**
 * _strncat - strncat
 * @dest: dest
 * @src: src
 * @n: n
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ldest = dest;
	int len = 0;
	int g = 0;
	int com = strlen(src);

	if (n > com)
		n = com;
	while (ldest[len] != '\0')
	{
		len++;
	}
	for (; g < n; g++)
	{
		dest[len] = src[g];
		len++;
	}
	dest[len] = '\0';

	return (dest);
}
