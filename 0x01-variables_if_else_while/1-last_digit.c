#include <stdio.h>
/**
 * main - a function prints the last digit of the given number
 *
 * Return: Always 0 (Success)
 */

int main(void){

	int n = 98;

	int lastDigit = n % 10;

    if (lastDigit > 5)
    printf("Last digit of %d is %d and is greater than 5 \n", n, lastDigit);
    
    else if (lastDigit < 6 && lastDigit > 0)
    printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
    
    else if (lastDigit == 0)
    printf("Last digit of %d is %d and is 0\n", n, lastDigit);
    
    return (0);
}
