#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints the sum of all positive args
 *
 * @argv: argument vector
 * @argc: size of argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
int se, co = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
se = atoi(argv[1]);
while (se > 0)
{
co++;
if ((se - 25) >= 0)
{
se -= 25;
continue;
}
if ((se - 10) >= 0)
{
se -= 10;
continue;
}
if ((se - 5) >= 0)
{
se -= 5;
continue;
}
if ((se - 2) >= 0)
{
se -= 2;
continue;
}
se--;
}
printf("%d\n", co);
return (0);
}
