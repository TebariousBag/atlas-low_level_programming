#include "lists.h"
/**
 * sum_dlistint - returns sum of all data n of list
 * @head: head of list
 * Return: sum of all data or 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;	/*adding the data of n to sum*/
		head = head->next;	/*moving to next node*/
	}

	return (sum);	/*total of all data*/
}
