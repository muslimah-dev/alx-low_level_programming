#include "main.h"

/**
 * print_sign - used to print the sign of numbers.
 * Return: 0, if 0, 1 if positive, -1 if negative
 * @n: variable used.
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
