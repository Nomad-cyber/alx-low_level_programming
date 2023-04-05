#include <stdio.h>
#include "lists.h"
/**
 * print_listint - Function that prints all elements of a listint_t list.
 * @h: Points to head
 * Return: The number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
