#include "main.h"
#include <stdlib.h>

int contador(int len)
{
	char *str;

	while (!str)
	{
		len++;
		str++;
	}
	return (len);
}
char *str_concat(char *s1, char *s2)
{
	int box, len;
	char *c;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	c = malloc(contador(*s1) + contador(*s2) + 1);
	if (!c)
		return (NULL);
	for (box = 0; s1[box] != '\0'; box++)
	{
		c[box] = s1[box];
	}
	for (len = 0; s2[len] != '\0'; len++)
	{
		c[box] = s2[len];
		box++;
	}
	c[box + 1] = '\0';
	return (c);
}
