#include "main.h"

/**
 * puts2 - Write a function that prints every other character
 * @str: variable to be used
 */
void puts2(char *str)
{
	int i, len;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

