#include "main.h"
/**
 * _strstr - write a fuction locale a substring
 * @haystack: Input
 * @needle: Find to locate in the string
 * Return: A pointer
 */
char *_strstr(char *haystack, char *needle)
{
	char *temp;

	while (*haystack)
	{
		temp = haystack;
		while (*needle == *haystack)
		{
			haystack++, needle++;
		}
		if (*needle == '\0')
			return (temp);
		haystack++;
	}
	return (0);
}
