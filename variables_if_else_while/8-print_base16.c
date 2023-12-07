#include <stdio.h>

/**
 * main - Betty
 * Return: 0
 */
int main(void)
{
	int num = 0;
	char abc = 97;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}

	while (abc < 103)
	{
		putchar(abc);
		abc++;
	}
	putchar('\n');

	return (0);
}

