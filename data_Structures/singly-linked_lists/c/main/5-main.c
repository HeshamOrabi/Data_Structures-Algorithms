#include "sls.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;
	char *str;

	head = NULL;
	add_node_end(&head, "zero");
	add_node_end(&head, "one");
	add_node_end(&head, "two");
	add_node_end(&head, "three");
	add_node_end(&head, "four");
	add_node_end(&head, "five");
	add_node_end(&head, "six");
	add_node_end(&head, "seven");
	print_list(head);
	str = pop_list(&head);
	printf("- %s\n", str);
	free(str);
	print_list(head);
	str = pop_list(&head);
	printf("- %s\n", str);
	free(str);
	print_list(head);
	free_list(&head);
	printf("%p\n", (void *)head);
	return (0);
}