#include "main.h"
/**
 * _memset - memset
 * @s: string
 * @b: constant byte
 * @n: n bytes
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		s[count] = b;
	}


	return (s);
}
