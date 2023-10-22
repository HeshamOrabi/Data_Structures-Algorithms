#include "sls.h"

/**
 * add_node - function to add node to the beggning of list
 * @head: pointer to pointer of the head
 * @str: str pointer
 * Return: pointer to head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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
	new->next = *head;

	*head = new;

	return (*head);
}
