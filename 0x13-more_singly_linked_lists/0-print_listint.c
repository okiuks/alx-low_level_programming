#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a list listint_t.
 *
 * @h: head of struct listint_t.
 *
 * Return:  number of nodes (n).
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
