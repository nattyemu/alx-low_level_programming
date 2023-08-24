#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: intiger
 * Return: pointer to result string
 */

char *_strncat(char *dest, char *src, int n)
{
int id = 0;
int len = 0;
while (dest[id++])
len++;
for (id = 0; src[id] && id < n; id++)
dest[len++] = src[id];
return (dest);
}
