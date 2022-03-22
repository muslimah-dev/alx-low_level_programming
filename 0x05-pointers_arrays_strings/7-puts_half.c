#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: variable used
 */
void puts_half(char *str)
{
	int len = 0;
	int i, n;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (len % 2 == 1)
	{
		for (n = (len - 1) / 2; n < (len - 1); n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}

