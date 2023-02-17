#include <stdlib.h>
#include <stdio.h>
/* Program prints the alphabet in lowercase, and then in uppercase*/

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

	a = 'A';

	while (a <= 'Z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
