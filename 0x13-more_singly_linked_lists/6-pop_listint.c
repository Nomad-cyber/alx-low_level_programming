#include "lists.h"

/**
 * pop_listint - Function deletes the head node of list
 * @head: Points to head
 * Return: the head node's data (n), or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *del_node;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	else
	{
		del_node = *head;
		*head = (*head)->next;
		n = del_node->n;
		free(del_node);
	}

	return (n);
}
