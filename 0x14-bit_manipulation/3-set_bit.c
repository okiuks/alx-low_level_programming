#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: value of a bit.
 * @index: bit index.
 * Return: 1 if success, -1 if unsuccessful.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int add;

	if (index > 63)
		return (-1);

	add = 1 << index;
	*n = (*n | add);

	return (1);
}
