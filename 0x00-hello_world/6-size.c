 #include <stdio.h>

/**
 * main -a program prints size
 *
 * Return: 0 (Success)
 */
int main(void)
{
	prittf("Size of a char: %d byte(s)", sizeof(char));
	printf("Size of an int: %d byte(s)", sizeof(int));
	printf("Size of a long int: %d byte(s)", sizeof(long int));
	printf("Size of a float: %d byte(s)", sizeof(float));
	return (0);
}
