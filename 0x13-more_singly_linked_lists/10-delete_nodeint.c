#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at a given index
 * @head: Points to head
 * @index: The index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	current = *head;
	previous = NULL;

	for (i = 0; i < index && current != NULL; i++)
	{
		previous = current;
		current = current->next;
	}
	if (current == NULL)
	{
		return (-1);
	}

	if (previous == NULL)
	{
		*head = current->next;
	}
	else
	{
		previous->next = current->next;
	}

	free(current);
	return (1);
}
