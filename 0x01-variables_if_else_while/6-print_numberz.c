#include <stdlib.h>
#include <stdio.h>

/**
 * Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 * main - Entry point
 * Return: 0
 */
int main(void){
	int i = 48;

	while (i < 58){
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
