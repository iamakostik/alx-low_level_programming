#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - check the code
 * @width: variable
 * @height: variable
 *
 * Return: Double Pointer
 */

int **alloc_grid(int width, int height)
{
	int **str;
	int x, y, z, i;

	i = 0;
	if (width <= 0 || height <= 0)
		return (0);

	str = malloc(height * sizeof(int *));
	if (str == 0)
		return (0);
	for (x = 0; x < height; x++)
	{
		*(str + x) = malloc(width * sizeof(int));
		if (*(str + x) == 0)
		{
			i = 1;
			break;
		}
		for (y = 0; y < width; y++)
		{
			str[x][y] = 0;
		}
	}
	if (i == 1)
	{
		for (z = 0; z <= x; z++)
		{
			free(*(str + z));
		}
		free(str);
	}
	return (str);
}

