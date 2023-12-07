#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - Fuction that print a name
 * @name: name
 * @f: f
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
