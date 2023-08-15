#include <stdio.h>
#include "main.h"

/**
* positive_or_negative - prints if integer is positive or negative
* @i: first tested
* Return: void or nothing
*/
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
