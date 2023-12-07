#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - duplicate string
 * @str: strin input
 * Return: s
 */

char *_strdup(char *str)
{
	char *s;
	int a;

	if (str == NULL)
		return (NULL);
	s = malloc((strlen(str) + 1));
	if (s == NULL)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
	{
		s[a] = str[a];
	}

	return (s);
}
