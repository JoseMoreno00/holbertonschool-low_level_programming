#include "main.h"
#include <stdio.h>

/**
 * _isupper - Check uppercase character
 * @c: charachters
 * Return: 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
