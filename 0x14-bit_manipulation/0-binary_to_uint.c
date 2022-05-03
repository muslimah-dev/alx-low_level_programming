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
	int n;
	unsigned int nm;

	nm = 0;
	if (!b)
	{
		return (0);
	}
	for (n = 0; b[n] != '\0'; n++)
	{
		if (b[n] != '0' && b[n] != '1')
			return (0);
	}
	for (n = 0; b[n] != '\0'; n++)
	{
		nm <<= 1;
		if (b[n] == '1')
		{
			nm += 1;
		}
	}
	return (nm);
}
