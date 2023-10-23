#include "sls.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;
	list_t *node;

	head = NULL;
	add_node_end(&head, "0");
	add_node_end(&head, "1");
	add_node_end(&head, "2");
	add_node_end(&head, "3");
	add_node_end(&head, "4");
	add_node_end(&head, "98");
	add_node_end(&head, "402");
	add_node_end(&head, "1024");
	print_list(head);
	node = get_node_at_index(head, 5);
	printf("%s\n", node->str);
	print_list(head);
	free_list(&head);
	return (0);
}
