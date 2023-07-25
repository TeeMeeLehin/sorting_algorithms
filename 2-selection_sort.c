#include "sort.h"

/**
* selection_sort - fucnction to implement selection sort algorithm
* @array: the array to be sorted
* @size: size of the array
* Return: void
*/
void selection_sort(int *array, size_t size)
{
size_t j, i, min, n = 0;
int temp;
for (j = 0; j < size; j++)
{
min = n;
for (i = n; i < size; i++)
{
if (array[i] < array[min])
{
min = i;
}
}
temp = array[n];
array[n] = array[min];
array[min] = temp;
print_array((const int *)array, size);
n++;
}
}
