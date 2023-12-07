#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: First number.
 * @m: Second number to convert
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif;
	int count = 0;

	dif = n ^ m;

	while (dif)
	{
		count++;
		dif &= (dif - 1);
	}
	return (count);
}
