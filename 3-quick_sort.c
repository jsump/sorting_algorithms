#include "sort.h"

void quick_sort_recursive(int *array, int low, int high);
void swap(int *a, int *b);
int partition(int *array, int low, int high);

/**
 * quick_sort - sortsan array of integers in ascending order,
 * using the quick sort algorithm.
 * @array: assray of integers
 * @size: size of array of integers
 */
void quick_sort(int *array, size_t size)
{
	size_t i;

	i = 0;

	for ( i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");

	quick_sort_recursive(array, 0, size - 1);
}

/**
 * swap -  swap the larger integer for the smaller one
 * @a: first integer
 * @b: second integer
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - divides the array into two where the larger,
 * integer in the array has settles after sort in the list.
 * @array: array of intergers.
 * @low: lower integer
 * @high: higher integer
 * Return: list after partition
 */
int partition(int *array, int low, int high)
{
	int pivot, i, j;

	pivot = array[high];
	i = low - 1;

	for (j = low; j <= high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
}

/**
 * quick_sort_recursive - Repeats the sorting algorthms
 * for each piece of divided array.
 * @array: array of integers
 * @low: lower index
 * @high: higher index
 */
void quick_sort_recursive(int *array, int low, int high)
{
	int pi, k;

	if (low < high)
	{
		pi = partition(array, low, high);

		for (k = 0; k < high + 1; k++)
		{
			printf("%d", array[k]);
			if (k < high)
				printf(", ");
		}
		printf("\n");

		quick_sort_recursive(array, low, pi - 1);
		quick_sort_recursive(array, pi + 1, high);
	}
}
