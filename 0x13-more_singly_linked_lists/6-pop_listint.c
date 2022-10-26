#include "lists.h"

/**
 * pop_listint - function that  deletes the head node of a list
 *
 * @head: pointer to head node
 * Return: head node's data or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n = 0;

	tmp = *head;
	if (tmp)
	{
		n = tmp->n;
		*head = tmp->next;
		free(tmp);
	}
	return (n);
}
