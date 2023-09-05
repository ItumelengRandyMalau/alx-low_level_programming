#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int v, r;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (v = 0; v < height; v++)
	{
		array[v] = malloc(sizeof(int) * width);

		if (array[v] == NULL)
		{
			for (; v >= 0; v--)
				free(array[v]);

			free(array);
			return (NULL);
		}
	}

	for (v = 0; v < height; v++)
	{
		for (r = 0; r < width; r++)
			array[v][r] = 0;
	}

	return (array);
}
