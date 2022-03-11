#include <stdio.h>

/**
 * main - prints hexadecimal digits.
 * Description: uses putchar
 * Return: 0
 */
int main(void)
{
	int n;
	char ch0;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch0 = 'a'; ch0 <= 'f'; ch0++)
	{
		putchar(ch0);
	}
	putchar('\n');
	return (0);
}

