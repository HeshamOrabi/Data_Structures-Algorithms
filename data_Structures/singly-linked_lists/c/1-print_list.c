#include "sls.h"

/**
 * print_list - Prints the elements of a linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of elements in the list.
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}

	return (i);
}
