#include "main.h"
/**
 * get_bit -  Function that returns the value of a bit at a given index
 * @n: Number to evaluate
 * @index: index that start in 0, the byte we want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int badampus;

	if (index > 64)
		return (-1);
	badampus = n >> index;
	return (badampus & 1);
}
