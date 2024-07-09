#include "lists.h"
#include "3-add_node_end.c"
#include "0-print_list.c"
/**
 * free_list - frees a list
 * @head: head of list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node->str);
		free(node);
	}
	
}
