 #include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a function prints all possible different combinations of two digits
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int c, d;

	for (c = 0; c < 9; c++)
	{
	for (d = c + 1; d <= 9; d++)
	{
	putchar(c + '0');
	putchar(d + '0');
	if (c == 8 && d == 9)
	continue;

	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
