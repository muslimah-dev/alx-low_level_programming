#include "main.h"

/**
 * print_number - prints a number
 * @n: variable used
 */
void print_number(int n)
{
	unsigned int n_first;

	if (n < 0)
	{
		n_first = -n;
		_putchar('-');
	} else
	{
		n_first = n;
	}
	if (n_first / 10)
	{
		print_number(n_first / 10);
	}
	_putchar((n_first % 10) + '0');
}
