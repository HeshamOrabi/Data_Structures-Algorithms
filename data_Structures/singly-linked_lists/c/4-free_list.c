#include "sls.h"

/**
 * free_list - frees a linked list from heap
 * @head: list_t list to be freed
*/
void free_list(list_t **head)
{
	list_t *tmp;

	while (*head)
	{
		tmp = (*head)->next;
		free((*head)->str);
		free(*head);
		*head = tmp;
	}

	*head = NULL;

}
