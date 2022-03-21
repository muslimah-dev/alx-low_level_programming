#include <unistd.h>

/**
 * _putchar - writes the character to stdout.
 * @c: variable used.
 * Return: 1, success.
 * On error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

