#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at given positiion
 * @h: the head of list
 * @idx: index where it should be added
 * @n: the data
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *head;

	if (idx == 0)	/*if its 0 than add node to beginning*/
		return (add_dnodeint(h, n));
	head = *h;
	while (idx > 1)
	/*move through each node until we get to where it needs to be*/
	{
		head = head->next;
			if (head == NULL)
				return (NULL);
			idx--;
	}
	if (head->next == NULL)	/*if true its end of list*/
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));	/*make space for new node*/

	if (new == NULL)	/*if null*/
		return (NULL);
	new->n = n;	/*add data from n*/
	/*and then a bunch of arranging pointers to put it in correct spot*/
	new->prev = head;
	new->next = head->next;
	head->next->prev = new;
	head->next = new;
	return (new);

}
