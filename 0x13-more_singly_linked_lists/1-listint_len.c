#include <stdio.h>
#include "lists.h"
/**
 * listint_len - Function returns number of elements in listint_t list
 * @h: Points to head
 * Return: The number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
