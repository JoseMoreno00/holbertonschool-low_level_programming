#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: accept
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, count;

	count = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				count++;
				break;
				}
			}
			if (accept[b] != s[a])
			{
			break;
			}
	}
	return (count);
}
