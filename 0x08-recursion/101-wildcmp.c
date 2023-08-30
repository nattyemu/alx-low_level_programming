#include "main.h"

/**
 * wildcmp - function that compare two strings
 *
 * @s1: string
 * @s2: string
 * Return: 1 if the number is prime or 0 anything else
 */

int wildcmp(char *s1, char *s2)
{
if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
return (0);

if (*s1 == '\0' && *s2 == '\0')
return (1);

if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));

if (*s2 == '*')
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
return (0);
}
