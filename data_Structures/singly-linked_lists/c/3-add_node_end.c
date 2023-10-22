#include "sls.h"

/**
 * add_node_end - function to add node to the end of list
 * @head: pointer to pointer of the head
 * @str: str pointer
 * Return: pointer to head
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp = *head;
	int len = 0;

	while (str[len])
	{
		len++;
	}


	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (!tmp)
	{
		*head = new;
		return (new);
	}


	while (tmp->next)
	{
		tmp = tmp->next;
	}

	tmp->next = new;

	return (new);
}
