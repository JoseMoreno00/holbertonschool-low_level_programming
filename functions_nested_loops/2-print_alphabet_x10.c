#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - x10alp
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int a = 97, b;

	for (b = 0; b <= 9; b++)
	{
		for (a = 97; a <= 122; a++)
		{
			putchar(a);
		}
		putchar('\n');
	}
}
