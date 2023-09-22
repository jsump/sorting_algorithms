#include "sort.h"

void swap(int *a, int *b);
/**
 * selection_sort - sorts an array of intergers in ascending order,
 * using the sorting algorithm.
 * @array: array of integers
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
				min_index = j;
		}
		if (min_index != i)
			swap(&array[i], &array[min_index]);
		for (j = 0; j < size; j++)
			printf("%d ", array[j]);
		printf("\n");
	}
}

/**
 * swap - swap the larger integer for the smaller one
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
