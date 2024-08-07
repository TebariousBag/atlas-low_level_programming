#include "lists.h"
/**
 * pop_listint - deletes the head node a linked list
 * @head: pointer to the head of the linked list
 * Return: nodes data or zero
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	tmp = *head;

	if (tmp == NULL)
		return (0);

	*head = tmp->next;
	n = tmp->n;
	free(tmp);

	return (n);
}
