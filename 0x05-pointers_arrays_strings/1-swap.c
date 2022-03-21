#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: points to the first variable.
 * @b: points to the second variable.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

