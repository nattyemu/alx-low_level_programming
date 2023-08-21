#include "main.h"

/**
 * _strlen - takes a pointer to display the length of a string
 * @s: an char input pointer
 *
 * Return: the length of a string
 */

int _strlen(char *s)
{
int size = 0;
while (*s != '\0')
{
size++;
s++;
}
return (size);
}
