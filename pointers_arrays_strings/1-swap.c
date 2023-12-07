#include "main.h"
/**
 * swap_int - swap the values
 * @a: a
 * @b: b
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;

	*a = *b;
	*b = p;
}
