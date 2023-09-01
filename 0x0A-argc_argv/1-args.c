#include "main.h"
#include <stdio.h>

/**
 * main - function that prints number of argument
 *
 * @argv: argument vector
 * @argc: size of argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
