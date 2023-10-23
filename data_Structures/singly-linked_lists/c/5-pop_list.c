#include "sls.h"

/**
 * pop_list - get the str value in a list
 * @head: the head of the linked list
 * Return: str or NULL if list is empty
*/
char *pop_list(list_t **head)
{
	list_t *tmp = *head;
	char *str;

	if (!tmp)
		return (NULL);
	*head = tmp->next;

	str = strdup(tmp->str);

	free(tmp->str);
	free(tmp);

	return (str);
}
