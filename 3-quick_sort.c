#include "sort.h"

/**
* swap_func - function to swap two elements
* @x: first element
* @y: second element
* Return: void
*/
void swap_func(int *x, int *y)
{
int temp = *x;
*x = *y;
*y = temp;
}

/**
* lomuto_partition - function to implement lomuto partition scheme
* @array: the array to be sorted
* @low: low point of partition
* @high: high point of partition
* Return: int
*/
int lomuto_partition(int *array, int low, int high)
{
int j, pivot = array[high], i = low - 1;

for (j = low; j <= high - 1; j++)
{
if (array[j] <= pivot)
{
i++;
swap_func(&array[i], &array[j]);
}
}

swap_func(&array[i + 1], &array[high]);
return (i + 1);
}

/**
* quick_sort - function to implement quick sort algorithm
* @array: array to be sorted
* @size: size of the array
* Return: void
*/
void quick_sort(int *array, size_t size)
{
int pivot_index;
if (size <= 1)
{
return;
}

pivot_index = lomuto_partition(array, 0, size - 1);

quick_sort(array, pivot_index);
quick_sort(array + pivot_index + 1, size - pivot_index - 1);
}
