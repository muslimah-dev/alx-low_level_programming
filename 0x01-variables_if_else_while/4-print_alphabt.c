#include <stdio.h>

/**
 * main - prints some characters
 * Description: uses putchar
 * Return: 0
 */
int main(void)
{
	char ch0 = 'a';

	while (ch0 <= 'z')
	{
		if (ch0 != 'e' && ch0 != 'q')
		{
			putchar(ch0);
		}
		ch0++;
	}
	putchar('\n');
	return (0);
}

