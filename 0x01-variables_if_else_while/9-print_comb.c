#include <stdio.h>
/* Write a program that prints all possible combinations of single-digit numbers. */

/**
 * Write a program that prints all possible combinations of single-digit numbers.
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
