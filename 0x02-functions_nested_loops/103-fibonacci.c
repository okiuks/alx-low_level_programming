#include <stdio.h>
/**
 * main - prints the sum of even-valued terms not exceeding 4000000
 * Return: 0
 */

int main(void)
{
	int i = 1, j = 2, temp;
	int sum = 0;

	while (j <= 4000000)
	{
		if (j % 2 == 0)
			sum += j;
		temp = j;
		j = i + j;
		i = temp;
	}
	printf("%d\n", sum);

	return (0);
}
