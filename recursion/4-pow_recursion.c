#include "main.h"
/**
 * _pow_recursion - pow
 * @x: x
 * @y: y
 * Return: Return the value of x raised to the power y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
