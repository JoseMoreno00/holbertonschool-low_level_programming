#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - Fuction that allocate memory
 * @b: b
 * Return: A pointer to memory allocated
 */

void *malloc_checked(unsigned int b)
{
	char *str;

	str = malloc(b);
	if (!str)
		exit(98);
	return (str);
}
