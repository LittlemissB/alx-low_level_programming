#include "lists.h"

/**
 * add_nodeint - Add a new node at the beginning of a linked list
 * @head: Previous Head Node
 * @n: data to insert in that new node
 * Return: Pointer tot he new head or Null on error
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));

	if (!new_head)
		return (NULL);

	new_head->n = n;

	new_head->next = *head;
	*head = new_head;

	return (new_head);
}

