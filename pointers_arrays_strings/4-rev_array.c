#include "main.h"
/**
 *reverse_array - revers the content of an array of integers.
 *@a: arrays
 *@n: Number of element on the array
 *Return: 0
 */
void reverse_array(int *a, int n)
{
	int save;
	int r = 0;
	int h = n / 2;

	if (n > 0)
	{
		while (h != 0)
		{
			save = a[r];
			a[r] = a[n - 1];
			a[n - 1] = save;
			h--;
			r++;
			n--;

		}
	}
}

