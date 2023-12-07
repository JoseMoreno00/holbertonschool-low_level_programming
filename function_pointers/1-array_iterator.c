#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array
 * @array: array
 * @size: size
 * @action: action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array && !action)
	{
		return;
	}
	if (!array || !action)
	{
		return;
	}
	for (i = 0; i < size; i++)
	action(*(array + i));
}
