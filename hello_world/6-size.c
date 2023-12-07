#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *tl = "byte(s)";

	printf("Size of a char: %lu %s\n", sizeof(char), tl);
	printf("Size of an int: %lu %s\n", sizeof(int), tl);
	printf("Size of a long int: %lu %s\n", sizeof(long), tl);
	printf("Size of a long long int: %lu %s\n", sizeof(long long), tl);
	printf("Size of a float: %lu %s\n", sizeof(float), tl);

	return (0);
}
