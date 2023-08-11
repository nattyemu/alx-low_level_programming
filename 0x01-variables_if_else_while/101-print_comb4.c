#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a function prints all possible different combinations of three digits
 *
 * Return: 0 (Success)
 */

int main(void)
{

	int a, b, c;

	for (a = 0; a < 9; a++)
	{
	for (b = a + 1; b <= 9; b++)
	{
	for (c = b + 1; c <= 9; c++)
	{
	putchar(a + '0');
	putchar(b + '0');
	putchar(c + '0');
	if (a == 7 && b == 8 && c == 9)
	continue;

	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
