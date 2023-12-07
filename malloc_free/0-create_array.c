#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create a array ussing malloc
 * @size: size of the array
 * @c: c
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int s;

	a = (char *) malloc(size * sizeof(c));
	if (a == NULL || size == '\0')
	{
		return ('\0');
	}
	for (s = 0; s < size; s++)
	{
		a[s] = c;
	}

	return (a);
}
