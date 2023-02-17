#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* This program will assign a random number to the variable n each time it is executed. */

/**
 * main - prints the last digit of n and prints out whether it is
 * greater than 5, 0, or less than 6
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	  
  	int lastDigit;

	lastDigit = n % 10;
	printf("Last digit of %i is %i and is ", n, lastDigit);
	
	/* if statement*/
	if (lastDigit > 5)
	{
		printf("greater than 5\n");
	} else if (lastDigit == 0)
	{
		printf("0\n");
	} else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}
