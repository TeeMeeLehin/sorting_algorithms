#include "sort.h"

/**
* bubble_sort - function to implement nubble sort algorithm
* @array: the list to be sorted
* @size: size of the list
* Return: void
*/
void bubble_sort(int *array, size_t size)
{
size_t i, j;
int temp, flag = 0;

for (i = 0; i < size; i++)
{
for (j = 0; j < size - 1; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
print_array((const int *)array, size);
flag++;
}
}
if (flag == 0)
{
print_array((const int *)array, size);
return;
}
}
}
