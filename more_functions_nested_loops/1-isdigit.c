#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Check if is a digit or not
 * @c: c is for digits or others
 * Return: 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
