#include "main.h"
/**
 *  print_array - A function that print n element of an array of integers
 *  @a: array name
 *  @n: it's the number of array's element to be printed
 *  Return: a and n input
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < (n - 1); b++)
	{
		printf("%d, ", a[b]);
	}
	if (b == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
