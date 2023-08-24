#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints a buffer
 *
 * @size: input value
 * @b: string poiter
 * Return: nothing
 */

void print_buffer(char *b, int size)
{
int start, end;
if (size > 0)
{
for (start = 0; start < size; start += 10)
{
end = (size - start < 10) ? size - start : 10;
printf("%08x, ", start);
printHexes(b, start, end);
printASCII(b, start, end);
printf("\n");
}
}
else
{
printf("\n");
}
}
