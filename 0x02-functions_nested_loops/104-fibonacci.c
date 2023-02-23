#include <stdio.h>
/**
 * main - prints fibonacci series between 1 and 98
 * Return: 0
 */
int main(void)
{
	int num1 = 1, num2 = 2, nextNum, count = 1;

	while (count < 98)
	{
		nextNum = num1 + num2;
		printf("%d, ", nextNum);
		num1 = num2;
		num2 = nextNum;
		count++;
	}
	printf("\n");
	return (0);
}
