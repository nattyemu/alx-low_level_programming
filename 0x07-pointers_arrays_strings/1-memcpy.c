#include "main.h"

/**
 * _memcpy - function that fills memory with a constant byte
 * @src: constant byte
 * @dest: pointed destination
 * @n: bytes
 * Return: pointer destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
