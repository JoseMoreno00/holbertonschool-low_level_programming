#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - calloc
 * @nmemb: nmemb
 * @size: size
 * Return: s
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a, b;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = (nmemb * size);
	s = malloc(b);
	if (!s)
		return (NULL);
	for (a = 0; a < b; a++)
		s[a] = 0;
	return (s);
}
