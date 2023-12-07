#include "main.h"
/**
 * _strpbrk - Search a string for any of a set of bytes
 * @s: string
 * @accept: string locate
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, count;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (count = 0; accept[count] != '\0'; count++)
		{
			if (accept[count] == s[a])
			{
				return (&s[a]);
			}
		}
	}
	return ('\0');
}
