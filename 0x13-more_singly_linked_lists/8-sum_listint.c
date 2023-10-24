/**
 * sum_listint - calculates listint_t list all data sum
 * @head: linked list first node
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
 int sum = 0;
 listint_t *temp = head;

 while (temp)
 {
 sum += temp->n;
 temp = temp->next;
 }

 return (sum);
}

