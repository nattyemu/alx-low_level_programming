#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a function prints numbers with comma and space
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
	putchar(c + '0');

	if (c == 9)
	continue;

	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
