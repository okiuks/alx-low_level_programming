#include "main.h"
/**
 * more_numbers - prints 10 times the numbers
 * _putchar only 2 times
 * Return: 0-14 10 times
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j / 10) + ('0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
