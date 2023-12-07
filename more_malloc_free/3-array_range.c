#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - array of integers
 * @min: range min of memory allocated
 * @max: range max of memory allocated
 * Return: r
 */
int *array_range(int min, int max)
{
	int a, b;
	int *r;

	if (min > max)
		return (NULL);
	b = min;
	r = malloc(sizeof(int) * (max - min + 1));
	if (!r)
		return (NULL);
	for (a = 0; a <= (max - min); a++)
	{
		r[a] = b;
		b++;
	}
	return (r);
}
