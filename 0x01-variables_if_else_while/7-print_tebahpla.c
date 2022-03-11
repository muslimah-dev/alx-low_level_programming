#include <stdio.h>

/**
 * main - displays in reverse.
 * Description: uses putchar
 * Return: 0
 */
int main(void)
{
	char ch0;

	for (ch0 = 'z'; ch0 >= 'a'; ch0--)
	{
		putchar(ch0);
	}
	putchar('\n');
	return (0);
}

