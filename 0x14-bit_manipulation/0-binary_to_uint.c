#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - function that converts a binary number
 * to an unsigned int
 * @b: house of the vinary number.
 * Return: the decimal
 */
unsigned int binary_to_uint(const char *b)
{
	int it;
	unsigned int base_10;

	if (!b)
	{
		return (0);
	}
	for (it == 0; b[it]; it++)
	{
		if (b[it] < '0' || b[it] > '1')
			return (0);
		base_10 = 2 * base_10 + (b[it] - '0');
	}
	return (base_10);
}
