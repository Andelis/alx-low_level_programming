#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print if the number is positive, zero or negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if (l == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, n % 10);

	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);

	}
	
	return (0);
}
