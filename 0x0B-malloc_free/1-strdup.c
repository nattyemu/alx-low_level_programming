#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - a function that that returns a pointer to a newly allocated space
 *
 * @str: a string to be duplicate
 *
 * Return: a pointer to the duplicated string
 */

char *_strdup(char *str)
{
int a = 0, i = 1;
char *s;

if (str == NULL)
return (NULL);

while (str[i])
i++;

s = malloc((sizeof(char) * i) +1);

if (s == NULL)
return (NULL);

for (; a < i; a++)
s[a] = str[a];
s[a] = '\0';
return (s);
}
