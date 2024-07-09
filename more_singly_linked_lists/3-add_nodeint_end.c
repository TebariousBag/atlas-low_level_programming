#include "lists.h"
/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: pointer to the head of list
 * @n: number to be used
 * Return: NULL or the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *cursor = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode != NULL)
	{
		newnode->n = n;
		newnode->next = NULL;
	}
	else
		return (NULL);
	if (cursor != NULL)
	{
		while (cursor->next != NULL)
			cursor = cursor->next;
		cursor->next = newnode;
	}
	else
		*head = newnode;
	return (newnode);
}
