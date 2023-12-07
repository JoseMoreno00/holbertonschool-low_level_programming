#include "main.h"
/**
 *cap_string - capitalizes all words of a string
 *@s: s
 *Return: 0
 */
char *cap_string(char *s)
{
	int r = 0;

	if (s[r] <= 122 && s[r] >= 97)
		s[0] = s[0] - 32;
	while (s[r] != '\0')
	{
		if (s[r] == ' ' || s[r] == 9 || s[r] == 10 || s[r] == '.')
		{
			if (s[r + 1] <= 122 && s[r + 1] >= 97)
			{
				s[r + 1] = s[r + 1] - 32;
			}
		}
		r++;
	}
	return (s);
}
