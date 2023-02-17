#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - prints if the int is less than, equal or greater than 5
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;

	if (a > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, a);
	}
	else if (a == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, a);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a)
	}
	/* your code goes there */
	return (0);
}
