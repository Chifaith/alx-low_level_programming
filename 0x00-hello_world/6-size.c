#include<stdio.h>

/**
 * main - program starts and ends in this function
 * takes no arguments
 *
 * Description: determine the size of various data types on a computer
 * Return: returns 0
 */
int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;

printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
