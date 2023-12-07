#include "main.h"
/**
 * clear_bit - Function that sets the value of a bit to 0 at a given index.
 * @n: number to change
 * @index: index
 * Return: return 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int igd;

	if (index > 63 || !n)
		return (-1);
	igd = 1 << index;
	*n = (*n & ~igd) | ((0 << index) & igd);
	return (1);
}
