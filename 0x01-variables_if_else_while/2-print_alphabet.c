#include <stdio.h>
#include <stdlib.h>
/* Write a program that prints the alphabet in lowercase */

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	char a = 'a';
	/* while loop */
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
