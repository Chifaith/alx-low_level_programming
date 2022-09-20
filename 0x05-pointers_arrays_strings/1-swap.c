#include "main.h"

/**
 * swap_int - swaps the value of two interger.
 * @a: first interger.
 * @b: second interger.
 *
 * Returns: no specified return type.
 */
void swap_int(int *a, int *b)
{
	int b_val = *b;
	*b = *a;
	*a = b_val;
}
