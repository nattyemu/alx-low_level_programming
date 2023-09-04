#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - a function that creates an array of chars
 * @c: char to fill the array
 * @size: the size of the array
 *
 * Return: Returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *s;

if (size == 0)
return (NULL);

s = malloc(sizeof(char) * size);

if (s == NULL)
return (NULL);
for (i = 0; i < size; i++)
s[i] = c;
return (s);
}
