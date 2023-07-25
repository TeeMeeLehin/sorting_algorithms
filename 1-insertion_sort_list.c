#include "sort.h"

/**
* insertion_sort_list - sorting a list using the
* insertion sort algorithm
* @list: doubly linked list to be sorted
* Return: void
*/
void insertion_sort_list(listint_t **list)
{
listint_t *sorted, *current, *temp;
if (list == NULL || *list == NULL || (*list)->next == NULL)
return;
sorted = NULL; 

while (*list)
{
current = *list;
*list = (*list)->next;

if (sorted == NULL || current->n < sorted->n)
{
current->next = sorted;
current->prev = NULL;
if (sorted)
{
sorted->prev = current;
}
sorted = current;
}
else
{

temp = sorted;
while (temp->next != NULL && temp->next->n < current->n)
{
temp = temp->next;
}

current->next = temp->next;
current->prev = temp;
if (temp->next)
temp->next->prev = current;
temp->next = current;
print_list(current);
}
}

*list = sorted; 
}
