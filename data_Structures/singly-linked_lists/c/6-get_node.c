#include "sls.h"

/**
 * get_node_at_index - retrieves the node at a given index
 * @head: A pointer to the head of the linked list
 * @index: The desired index to retrieve
 *
 * Return: A pointer to the node at the specified index or NULL if not found.
 */
list_t *get_node_at_index(list_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head)
	{
		while (head)
		{
			if (i == index)
			{
				return (head);
			}
			head = head->next;
			i++;
		}
	}
	return (NULL);
}
