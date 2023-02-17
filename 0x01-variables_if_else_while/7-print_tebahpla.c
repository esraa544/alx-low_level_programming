#include <stdlib.h>
#include <stdio.h>

/**
 * Write a program that prints the lowercase alphabet in reverse, followed by a new line.
 * main - Entrry point
 * Return: 0
 */
int main(void){
	char a = 'z';

	while (a >= 'a'){
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
