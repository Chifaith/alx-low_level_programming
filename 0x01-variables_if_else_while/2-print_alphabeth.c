#include <stdio.h>

/**
 * main - entry and exit point of program
 * takes no arguments
 *
 * Description: prints all letters of the alphabeth
 * Return: 0 on success
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)/*lowercase alpha in ascii */
		putchar(i);
	putchar(10);/* newline ascii */
	return (0);
}

