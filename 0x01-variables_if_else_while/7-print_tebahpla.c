#include <stdlib.h>
#include <stdio.h>
/*  Write a program that prints the lowercase alphabet in reverse */


/**
 * main - Entrry point
 * Return: 0
 */
int main(void)
{
	char a = 'z';
	/* while loop */
	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
