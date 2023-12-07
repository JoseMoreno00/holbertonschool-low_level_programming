#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: s1 + (s2 + 1)
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, b;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	a = malloc(strlen(s1) + strlen(s2) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	if (!s1)
		for (b = 0; s2[b] != '\0'; b++)
		{
			a[b] = s2[b];
		}
	else if (!s2)
	{
		for (i = 0; s1[i]; i++)
			a[i] = s1[i];
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			a[i] = s1[i];
		for (b = 0; s2[b] != '\0'; b++)
		{
			a[i] = s2[b];
			i++;
		}
	}
	a[i + 1] = '\0';
	return (a);
}
