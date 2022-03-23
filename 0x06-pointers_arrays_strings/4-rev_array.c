#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: variable to be used.
 * @n: number of elements of the array.
 */
void reverse_array(int *a, int n)
{
	int aux[n];
	int i = 0;

	for (i = 0; i < n; i++)
	{
		aux[n - 1 - i] = a[i];
	}
	for (i = 0; i < n; i++)
	{
		aux[i] = a[i];
	}
}
