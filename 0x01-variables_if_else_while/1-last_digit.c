#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 20;
	if (a > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, a);
	if (a == 0)
		printf("last digit of %d is %d and is greater than 0\n", n, a);
	if (a < 6 && a != 0)
		printf("last digit of %d is %d and is greater than 6\n", n, a);
	return (0);
}
