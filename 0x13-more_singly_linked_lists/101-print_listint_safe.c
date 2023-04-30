#include "lists.h"

/**
 * print_listint_safe - Reverses a linked list
 * @head: Pointer to the first node in the list
 * Return: Pointer to the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_n = NULL;
	const listint_t *l_n = NULL;
	size_t num = 0;
	size_t new_n;

	tmp_n = head;
	while (tmp_n)
	{
		printf("[%p] %d\n", (void *)tmp_n, tmp_n->n);
		num++;
		tmp_n = tmp_n->next;
		l_n = head;
		new_n = 0;
		while (new_n < num)
		{
			if (tmp_n == l_n)
			{
				printf("-> [%p] %d\n", (void *)tmp_n, tmp_n->n);
				return (num);
			}
			l_n = l_n->next;
			new_n++;
		}
		if (!head)
			exit(98);
	}
	return (num);
}
