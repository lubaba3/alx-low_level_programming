#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @head: pointer to the list_t list
 *
 * Return: number of elements in head
 */
size_t list_len(const list_t *head)
{
size_t n = 0;
while (head)
{
n++;
head = head->next;
}
return (n);
}

