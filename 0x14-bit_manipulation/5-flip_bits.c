#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: first num
 * @m: second num
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int change, test;
	unsigned int total, i;

	total = 0;
	test = 1;
	change = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (test == (change & test))
		{
			total++;
		}
		test <<= 1;
	}
	return (total);
}
