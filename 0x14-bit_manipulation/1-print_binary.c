#include "main.h"

/**
 * _pow - calculate power of an int.
 * @base: base of the exponent.
 * @power: power of the exponent.
 * Return: expecyed result .
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int nm;
	unsigned int n;

	nm = 1;
	for (n = 1; n <= power; n++)
		nm *= base;
	return (nm);
}

/**
 * print_binary - prints a num in binary.
 * @n: num
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	unsigned long int made, gidi;
	char flag;

	flag = 0;
	made = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (made != 0)
	{
		gidi = n & made;
		if (gidi == made)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || made == 1)
			_putchar('0');
		made >>= 1;
	}
}
