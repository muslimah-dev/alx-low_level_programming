#include <stdio.h>

/**
 * main - prints all combinations of two digits.
 * Description: uses putchar
 * Return: 0
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n < 100; n++)
	{
		for (m = 0; m < 100; m++)
		{
			if (n < m)
			{
				putchar((m / 10) + 48);
				putchar((m % 10) + 48);
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				putchar(' ');
				if (n != 98 || m != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
