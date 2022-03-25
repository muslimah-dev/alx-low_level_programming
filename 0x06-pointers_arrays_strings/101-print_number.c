#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: variable to use
 */
void print_number(int n)
{
	unsigned int new_number;

	if (n < 0)
	{
		new_number = -n;
		_putchar('-');
	} else
	{
		new_number = n;
	}
}
