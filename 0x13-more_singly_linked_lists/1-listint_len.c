#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @head: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *head)
{
size_t num = 0;
while (head)
{
num++;
head = head->next;
}
return (num);
}

