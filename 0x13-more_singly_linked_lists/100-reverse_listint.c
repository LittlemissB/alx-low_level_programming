#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: Pointer to the first node in the list
 * Return: Pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = old;
		old = *head;
		*head = next;
	}
	*head = old;

	return (*head);
}
