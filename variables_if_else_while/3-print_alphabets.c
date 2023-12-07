#include <stdio.h>

/**
 * main - Betty
 *
 * Return: 0
 */

int main(void)
{
	char abc = 97;
	char ABC = 65;

	for (abc = 97 ; abc <= 122; abc++)
		putchar(abc);
	for (ABC = 65; ABC <= 90; ABC++)
		putchar(ABC);
	putchar('\n');

	return (0);
}
