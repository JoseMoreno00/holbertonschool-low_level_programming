#include "main.h"
/**
 * _memcpy - Copy the n bytes from memory area src to memory area dest
 * @src: Original memory area
 * @dest: Dest for memory area
 * @n: n bytes
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;
	char const *psrc = src;
	char *pdest = dest;

	for (count = 0; count < n; count++)
	{
		*pdest++ = *psrc++;
	}

	return (dest);
}
