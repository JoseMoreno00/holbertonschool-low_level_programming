#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat -  concatenates two strings whit a n limit
 * @s1: first string
 * @s2: second string
 * @n: n
 * Return: strings concatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
	{
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
	}
	if (n > b)
		n = b;
	s = malloc(((a + n) + 1));
	if (s == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
	{
		s[a] = s1[a];
	}
	for (b = 0; b != n; b++)
	{
		s[a] = s2[b];
		a++;
	}
	s[a] = '\0';
	return (s);
}
