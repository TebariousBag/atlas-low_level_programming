#include "lists.h"
/**
 * add_nodeint_end - adds new node to end of a list
 * @head: pointer to head of list
 * @n: the data
 * Return: address of new node or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	/*new next needs to point to NULL since its gonna be the last*/

	if (*head == NULL)	/*have to handle if there is no head*/
	{
		new->prev = NULL;	/*head prev needs to point to null*/
		*head = new;	/*the pointer to head is now to new*/
		return (new);
	}
	/*if there is a head we just need to add to the end*/

	last = *head;	/*make sure last is starting at the head*/

	while (last->next != NULL)
	{
		last = last->next;	/*iterate until we find the end*/
	}
	last->next = new;	/*last next points to new*/
	new->prev = last;

	return (new);
}
