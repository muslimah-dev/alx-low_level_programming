#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number
 * @index: index to check bit.
 * Return: val of the bit or -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, note;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	note = n & div;
	if (note == div)
		return (1);
	return (0);
}
