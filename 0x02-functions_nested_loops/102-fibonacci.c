#include <stdio.h>
/**
 * main - generates first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int i;
	int fib = 1;

	for (i = 1; i <= 50; i++)
		fib += i;
	return (0);
}
