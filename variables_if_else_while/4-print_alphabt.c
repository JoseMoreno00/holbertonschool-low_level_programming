#include <stdio.h>

/**
 * main - Betty
 *
 * Return: 0
 */

int main(void)
{
	int a = 97;

	while (a <= 'z')
	{
		putchar(a);
		a++;
		if (a == 101 || a == 113)
			a++;
	}
	putchar('\n');
	return (0);
}

