#include <stdlib.h>
#include <stdio.h>

/**
 * Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 * main - Entry point
 * Return: 0
 */
int main(void){
	char a = 'a';

	while (a <= 'z'){
		putchar(a);
		a++;
	}

	a = 'A';

	while (a <= 'Z'){
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
