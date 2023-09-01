#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s2: a pointer to the first string to be compare
 * @s1: a pointer to the second string to be compare
 * Return: pointer to result string
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
