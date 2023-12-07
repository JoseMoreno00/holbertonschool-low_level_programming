#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Same that previously but MORE NUMBERS!!!
 * Return: Always
 */
void more_numbers(void)
{
	int a, b;

	for (b = 0; b < 10; b++)
	{
		for (a = 0; a < 15; a++)
		{
			if (a > 9)
				_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
		}
		_putchar(10);
	}
}
