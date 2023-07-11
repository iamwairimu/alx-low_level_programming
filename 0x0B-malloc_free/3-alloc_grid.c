#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns pointer to 2 dimensional array
 * @width: the inputs width
 * @height: the inputs height
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **i;
	int j, a;

	if (width <= 0 || height <= 0)
		return (NULL);
	i = malloc(sizeof(int *) * height);

	if (i == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		i[j] = malloc(sizeof(int) * width);
		if (i[j] == NULL)
		{
			for (; j >= 0; j--)
				free(i[j]);
			free(i);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (a = 0; a < width; a++)
			i[j][a] = 0;
	}
	return (i);
}
