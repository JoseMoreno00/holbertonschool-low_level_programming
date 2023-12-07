#include "main.h"
/**
 *string_toupper - change all lower case in upper case
 *@s: s
 *Return: *
 */
char *string_toupper(char *s)
{
	int r = 0;

	while (s[r] != '\0')
	{
		if (s[r] >= 97 && s[r] <= 122)
		{
			s[r] = s[r] - 32;
		}
		r++;
	}
	return (s);
}
