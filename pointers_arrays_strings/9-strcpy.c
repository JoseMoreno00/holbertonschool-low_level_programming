#include "main.h"

/**
 * _strcpy - Copy the string
 * @dest: Retrun the value
 * @src: src
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	char *origin = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';


	return (origin);
}
