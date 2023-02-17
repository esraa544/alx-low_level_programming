#include <stdlib.h>
#include <stdio.h>

/**
 * Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 * main - Entry point
 * Return: 0
 */
int main(void){
	int a;

	for (a = 0; a < 10; a++){
		printf("%i", a);
  	}
	printf("\n");
	return (0);
}
