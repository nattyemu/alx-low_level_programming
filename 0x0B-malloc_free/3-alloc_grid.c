#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - a function that returns a pointer to a 2
 * dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: 2D array
 */

int **alloc_grid(int width, int height)
{
int i, j, k, l;
int **a;
if (width <= 0 || height <= 0)
return (NULL);

a = malloc(sizeof(int *) * height);
if (a == NULL)
{
free(a);
return (NULL);
}

for (i = 0; i < height; i++)
{
a[i] = malloc(sizeof(int) * width);
if (a[i] == NULL)
{
for (j = 0; j < width; j++)
{
free(a[j]);
}
free(a);
return (NULL);
}
}

for (k = 0; k < height; k++)
{
for (l = 0; l < width; l++)
{
a[k][l] = 0;
}
}
return (a);
}
