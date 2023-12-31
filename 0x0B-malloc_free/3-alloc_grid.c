#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - a function that returns a pointer to 2D
 * @width: width of array
 * @height: height of array
 * Return: returns to pointer to a 2D array of integers
 */

int **alloc_grid(int width, int height)
{
	int i, j, **arr;

	arr = malloc(height * sizeof(*arr));
	if (arr == NULL)
	{
		return (NULL);
	}
	if (width < 1 || height < 1)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(*(arr[i])));
		if (arr[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(arr[i]);
			free(arr);
		}
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
