#include "main.h"

/**
 * print_rev - that prints a string in reverse followed by a new line
 * @s: an char input pointer
 *
 * Return: nothing
 */

void print_rev(char *s)
{
int size = 0;
int i;
while (*s != '\0')
{
size++;
s++;
}
s--;
for (i = size; i > 0; i--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
