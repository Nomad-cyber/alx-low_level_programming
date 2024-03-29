#include "lists.h"
/**
 * free_listint - Function that frees a listint_t list
 * @head: Points to head
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
