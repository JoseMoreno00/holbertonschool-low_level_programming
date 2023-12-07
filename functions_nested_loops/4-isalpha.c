#include "main.h"
#include <stdio.h>

/**
 * _isalpha - UpperCase
 * @c: cisfun
 * Return: 0
 */
int _isalpha(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
