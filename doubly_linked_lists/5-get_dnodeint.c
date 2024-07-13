#include "lists.h"
/**
 * get_dnodeint_at_index - returns nth node of a list
 * @head: head of list
 * @index: node to find
 * Return: nth node of list or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;	/*iterator*/

	if (head == NULL)	/*null case*/
	{
		return (NULL);
	}

	while (head && i < index)
	{
		head = head->next;	/*iterate through list until index*/
		i++;
	}

	return (head);
}
