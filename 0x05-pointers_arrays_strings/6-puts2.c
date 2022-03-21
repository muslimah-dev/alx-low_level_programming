#include "main.h"

/**
 * puts2 - Write a function that prints every other character
 * @str: variable to be used
 */
void puts2(char *str)
{
	int i;
	int len = 0;

	for (i = 0; str[len] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

