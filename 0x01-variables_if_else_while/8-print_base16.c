#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
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
