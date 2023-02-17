#include <stdlib.h>
#include <stdio.h>
/* Write a program that prints the alphabet in lowercase */

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	char b;
	/* for loop */
	for (b = 'a'; b <= 'z'; b++)
	{
		if (b != 'q' && b != 'e')
		{
			putchar(b); } }
	putchar('\n');
	return (0);
}
