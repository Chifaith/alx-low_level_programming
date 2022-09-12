#include <stdio.h>

/**
 * main - entry and exit point of a program
 * no arguments
 *
 * Description: prints alphabeth in lowercase then uppercase
 * Return: 0 value on success
 */
int main(void)
{
	int i;

	for (i = 97; i < 123 l; i++) /* lowercase alpha in ascii */
		putchar(i);
	for (i = 65; i < 91; i++)/* uppercase alpha in ascii*/
		putchar(i);
	putchar(10);/* newline ascii */
	return (0);
}
