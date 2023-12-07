#include "main.h"
/**
 * set_bit - Function taht sets the value of a bit to 1 at given index
 * @n: unsigned long to change
 * @index: index
 * Return: return 1 if it worked, or -1 if an error ocurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63 || !n)
		return (-1);
	(*n |= 1 << index);
	return (1);
}
