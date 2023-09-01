#include "main.h"
#include <stdio.h>
/**
 * _strcat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to result string
 */

char *_strcat(char *dest, char *src)
{
int i;
int len = 0;
while (dest[len])
len++;
for (i = 0; src[i] != 0; i++)
{
dest[len] = src[i];
len++;
}
dest[len] = '\0';
return (dest);
}
