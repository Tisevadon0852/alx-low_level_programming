#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * @head: head of the linked list
 * @str: string to be stored in the list
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *current;
	size_t newchar;

	current = malloc(sizeof(list_t));
	if (current == NULL)
		return (NULL);

	current->str = strdup(str);

	for (newchar = 0; str[newchar]; newchar++)
		;

	current->len = newchar;
	current->next = *head;
	*head = current;

	return (*head);
}
