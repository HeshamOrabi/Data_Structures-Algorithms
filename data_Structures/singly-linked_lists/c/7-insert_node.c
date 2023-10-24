#include "sls.h"

/**
 * insert_node_at_index - inserts a new node at a specific index
 * @head: A pointer to the head of the linked list
 * @idx: The index at which the new node should be inserted
 * @str: The string to be stored in the new node
 *
 * Return: A pointer to the new node if successful, NULL on failure.
 */
list_t *insert_node_at_index(list_t **head, unsigned int idx, char *str)
{
	unsigned int i = 0;
	list_t *tmp = *head, *new;
	int len = 0;

	if (!str)
		return (NULL);

	while (str[len])
	{
		len++;
	}
	if (idx == 0)
	{
		new = malloc(sizeof(list_t));
		if (!new)
			return (NULL);
		new->str = strdup(str);
		new->len = len;
		new->next = *head;
		*head = new;
		return (new);
	}
	while (tmp)
	{
		if (i == idx - 1)
		{
			new = malloc(sizeof(list_t));
			if (!new)
				return (NULL);
			new->str = strdup(str);
			new->len = len;
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
