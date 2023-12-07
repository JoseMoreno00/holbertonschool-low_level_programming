#include "main.h"
/**
 * leet - Leet is awesome
 * @s: s
 * Return: 0
 */
char *leet(char *s)
{
	int r = 0;
	int t = 0;
	char *a = "AaEeOoLlTt";
	char *b = "4433001177";

	while (s[t] != '\0')
	{
		while (a[r] != '\0')
		{
			if (s[t] == a[r])
			{
				s[t] = b[r];
			}
			r++;
		}
		r = 0;
		t++;
	}
	return (s);
}
