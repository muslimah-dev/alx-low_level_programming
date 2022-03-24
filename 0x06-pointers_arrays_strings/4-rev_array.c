#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: variable to be used.
 * @n: number of elements of the array.
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		a[i] = tmp;
		a[i] = a[j];
		a[j--] = tmp;
	}
}
