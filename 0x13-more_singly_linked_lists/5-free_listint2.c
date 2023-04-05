#include "lists.h"
/**
 * free_listint2 - Function that frees a listint_t list
 * @head: Points to head
 * Description: This function  sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
	}

	*head = NULL;
}

