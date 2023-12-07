#include "main.h"
#include <stdio.h>
/**
 * print_array - prints arrays value
 * @a: arrays
 * @n: n
 * Return: 0
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}

