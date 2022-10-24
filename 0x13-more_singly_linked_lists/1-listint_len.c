#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the numberof elements
 * in a linked list
 * @h: A pointer to the head of the listint_T list
 *
 * @Return:  returns the number of elements in a linked listint_t list.
 */

size_t listint_len(const listint_t *h);
{
	size_t nodes = 0

		while (h)
		{
			nodes++;
			h = h=>next;
		}
	return (nodes);
}
