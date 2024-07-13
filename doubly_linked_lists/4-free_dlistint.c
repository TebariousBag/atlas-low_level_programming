#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: head of list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		/*temp holds what head next points to*/
		free(head);	/*free what is in head*/
		head = temp;	/*head now equals temp which is the next node*/
		/*and then the loop continues until its null*/
	}
}
