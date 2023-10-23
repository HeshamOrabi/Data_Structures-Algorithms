#include "sls.h"

/**
 * delete_node_at_index - deletes a node at a specific index
 * @head: A pointer to the head of the linked list
 * @index: The index at which the node should be deleted
 *
 * Return: A pointer to the deleted string if successful, NULL on failure.
 */
char *delete_node_at_index(list_t **head, unsigned int index)
{
	list_t *cur = *head, *next;
	unsigned int i = 0;
	char *str;

	if (!head || !*head)
		return (NULL);
	while (cur)
	{
		next = cur->next;
		if (index == 0)
		{
			str = strdup(cur->str);
			free(cur->str);
			free(cur);
			*head = next;
			return (str);
		}
		if (i == index - 1)
		{
			str = strdup(next->str);
			cur->next = next->next;
			free(next->str);
			free(next);
			return (str);
		}
		cur = next;
		i++;
	}
	return (NULL);
}
