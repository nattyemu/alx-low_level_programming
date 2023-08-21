#include "main.h"

/**
 * swap_int - takes a pointer to swap the given numbers
 * @a: an integer input pointer
 * @b: an integer input pointer
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
int m;

m = *a;
*a = *b;
*b = m;
}
