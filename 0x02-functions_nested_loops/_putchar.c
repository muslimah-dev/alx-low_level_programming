#include <unistd.h>

/**
 * main - prints the character c to standard output
 * Description: c is the character to print.
 * Return: 1 (always success)
 * On error, -1 is returned
 * @c: character to print
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

