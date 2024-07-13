#include "lists.h"
/**
 * add_dnodeint - adds a new node to the beginning of list
 * @head: head of list
 * @n: the data
 * Return: address of new node or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new; /*designate a new node*/

	new = malloc(sizeof(dlistint_t)); /*alllocate memory for the new node*/

	if (new == NULL)	/*base case if its null*/
	{
		return (NULL);
	}

	new->n = n;	/*pointer of new = the value of what n contains*/
	new->prev = NULL; /*new is gonna be the head so prev has to be NULL*/
	new->next = *head;
	/*making sure the next is pointing to head so it is now the head*/

	if (*head != NULL)
	{
		(*head)->prev = new; /*point heads prev to new*/
	}
	*head = new; /*make sure the head pointer is pointing to new now*/

	return (new);
}
