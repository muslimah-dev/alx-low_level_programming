#include "main.h"

/**
 * print_sign - used to print the sign of numbers.
 * Return: 1, when n is positive
 * @n: variable used
 * 0 and prints 0 if n is zero
 * -1 when n is negative.
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
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
