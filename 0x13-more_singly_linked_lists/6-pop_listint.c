#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list.
 * @head: A pointer to the address of the head
 *
 *
 * Return: if the linked list is empty return 0
 * otherwise, the head node’s data (n).
 */

int pop_listint(listint_t **head);
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
