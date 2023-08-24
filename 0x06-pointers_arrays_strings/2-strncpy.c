#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: intiger
 * Return: pointer to result string
 */

char *_strncpy(char *dest, char *src, int n)
{
int id = 0;
int len = 0;
while (src[id++])
len++;
for (id = 0; src[id] && id < n; id++)
dest[id] = src[id];
for (id = len; id < n; id++)
dest[id] = '\0';
return (dest);
}
