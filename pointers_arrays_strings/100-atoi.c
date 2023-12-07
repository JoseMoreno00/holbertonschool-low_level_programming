#include "main.h"
/**
 * _atoi - Change a string to integer
 * @s: string
 * Return: 0
 */
int _atoi(char *s)
{
	int num = 0;
	unsigned int imthesig = 1;

	while (*s != '\0')
	{
		if (*s == 45 && *s + 1 != ' ')
			imthesig = -1;
		else if (*s >= 48 && *s <= 57)
		{
			num = num * 10 + (*s - '0');
		}
		else if (num > 0)
			break;
		s++;
	}
	return (num * imthesig);
}
