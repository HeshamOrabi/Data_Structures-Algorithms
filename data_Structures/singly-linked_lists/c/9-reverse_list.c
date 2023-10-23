#include "sls.h"

/**
 * reverse_list - Reverses a linked list
 * @head: A pointer to the head of the linked list
 *
 * Return: A pointer to the new head of the reversed list.
 */
list_t *reverse_list(list_t **head)
{
	list_t *next = NULL, *prv = NULL, *cur = *head;

	while (cur)
	{
		next = cur->next;
		cur->next = prv;
		prv = cur;
		cur = next;
	}

	*head = prv;

	return (*head);
}
