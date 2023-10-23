#include "sls.h"

/**
 * 
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
