#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - Print the string and the string same reverse
 * @s: String
 * Return: 0
 */

void rev_string(char *s)
{
	int chain = strlen(s);
	int mid = chain / 2;
	int i = 0;
	char save;

	for (i = 0; i < mid; i++)
	{
		save = s[i];
		s[i] = s[chain - i - 1];
		s[chain - i - 1] = save;
	}
}
