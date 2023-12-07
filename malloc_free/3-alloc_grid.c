#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - alloc grid
 * @width: width
 * @height: height
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int a, b;
	int **s;

	if (width < 1 || height < 1)
		return (NULL);
	s = malloc(sizeof(int *) * height);
	if (!s)
	{
		free(s);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		s[a] = malloc(sizeof(int) * width);
		if (!s[a])
		{
			for (a = 0; a < height; a++)
			{
				free(s[a]);
			}
			free(s);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			s[a][b] = 0;
		}
	}
	return (s);
}
