#include <stdlib.h>
#include <stdio.h>
/* Program prints all possible different combinations of two digits */

/**
 * main - prints out all the numbers between 00 and 99
 * with no two digits being the same
 * Return: 0
 */
int main(void)
{
	int i, j;
	/* for loop */
	for (i = 48; i < 58; i++)
	{
		for (j = i; j < 58; j++)
		{
			if (i == j)
			{
				continue;
			}

			putchar(i);
			putchar(j);

			if (i == 56 && j == 57)
			{
				break;
			} else{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
