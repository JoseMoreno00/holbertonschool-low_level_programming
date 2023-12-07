#include "main.h"
/**
 *_strchr - Localize a character in a string
 *@s: string
 *@c: character
 *Return: 0
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		s++;
		if (*s == c)
			return (s);
		if (*s == '\0')
			return ('\0');
	}
	return ('\0');
}

