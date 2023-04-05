#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Points to head
 * @idx: Index  where to add new node
 * @n: The  value to add
 * Return: The adress of the new node, or Null if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int i;

	if (!head)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_nodeint(head, n));
	}

	current = *head;
	for (i = 0; i < idx - 1 && current; i++)
	{
		current = current->next;
	}
	if (!current)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
