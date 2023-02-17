#include <stdlib.h>
#include <stdio.h>

/**
 * Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
 * main - Entry point
 * Return: 0
 */
int main(void){
	int j;

	for (j = 48; j < 58; j++){
		putchar(j);
  	}
	for (j = 'a'; j <= 'f'; j++){
		putchar(j);
	}
	putchar('\n');
	return (0);
}
