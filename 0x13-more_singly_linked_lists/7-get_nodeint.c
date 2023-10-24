#include "lists.h"

/**
 * get_nodeint_at_index - returns linked list certain index node
 * @head: linked list first node
 * @index: node index return
 *
 * Return: node  pointer we're looking for, or NULL 
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
 unsigned int i = 0;
 listint_t *temp = head;

 while (temp && i < index)
 {
 temp = temp->next;
 i++;
 }

 return (temp ? temp : NULL);
}

