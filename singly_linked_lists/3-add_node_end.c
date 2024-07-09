#include "lists.h"

/**
 * add_node - adds a new node to the end
 * @head: head of the list
 * @str: string to store
 * Return: theaddress of head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *node;
	size_t n;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);

	for (n = 0; str[n]; n++)
		;
	newnode->len = n;
	newnode->next = NULL;
	node = *head;

	if (node == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (node->next != NULL)
		{
			node = node->next;
		node->next = newnode;
		}
		return (*head);
	}
}
