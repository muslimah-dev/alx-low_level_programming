#include "main.h"

/**
 * print_rev - function that prints a string, in reverse.
 * @s: variable to be used.
 */
void print_rev(char *s)
{
	int i, j;
	int len = 0;

	for (i = 0; s[i] != 0; i++)
	{
		len++;
	}
	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}

