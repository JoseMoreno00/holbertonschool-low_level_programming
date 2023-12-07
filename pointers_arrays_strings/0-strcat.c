#include "main.h"

/**
 * _strcat - concatenates two srtings
 * @dest: dest
 * @src: src
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	char *csrc = dest;
	int dest_len;
	int i;

	while (*csrc != '\0')
	{
		len++;
		csrc++;
	}
	dest_len = len;
	for (i = 0; i < (dest_len + 1) && *src != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
