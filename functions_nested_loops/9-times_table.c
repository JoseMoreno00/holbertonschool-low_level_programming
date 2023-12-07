#include "main.h"
#include <stdio.h>

/**
 * times_table - A9table
 * Return: 0
 */

void times_table(void)
{
	int n, a, h;

	for (n = 0; n <= 9; n++)
	{
		for (a = 0; a <= 9; a++)
		{
			h = (n * a);
			if (a != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (h >= 10)
			{
				_putchar((h / 10) + '0');
				_putchar((h % 10) + '0');
			}
			else if (h < 10 && a != 0)
			{
				_putchar(' ');
				_putchar((h % 10) + '0');
			}
			else
				_putchar((h % 10) + '0');
		}
		_putchar('\n');
	}
}
