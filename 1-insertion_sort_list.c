#include "sort.h"

/**
swap_func - function to swap two nodes of a 
* doubly linked list
* @list: the doubly linked list
* @first: first node
* @second: second node
* Return: void
*/
void swap_func(listint_t **list, listint_t *first, listint_t *second)
{
listint_t *b4_first, *afta_sec;

if (!first || !second)
{
return;
}

b4_first = first->prev;
afta_sec = second->next;

first->next = afta_sec;
second->prev = b4_first;
first->prev = second;
second->next = first;

if (!b4_first)
{
*list = second;
}
else
{
b4_first->next = second;
}

if(afta_sec)
{
afta_sec->prev = first;
}

return;
}

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
