#include "sort.h"

int partition(int *array, int low, int high);
void quick_sort_recursive(int *array, int low, int high);
void swap(int *a, int *b);

/**
 * quick_sort - sortsan array of integers in ascending order,
 * using the quick sort algorithm.
 * @array: assray of integers
 * @size: size of array of integers
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	quick_sort_recursive(array, 0, (int)size - 1);
}

/**
 * quick_sort_recursive - rescursive helper for quick_sort
 * fucntion.
 * @array: array of integers
 * @low: lower index
 * @high: higher index
 */
void quick_sort_recursive(int *array, int low, int high)
{
	int pi;

	if (low < high)
	{
		pi = partition(array, low, high);


		quick_sort_recursive(array, low, pi - 1);
		quick_sort_recursive(array, pi + 1, high);
	}
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
	int pivot, i, j, k;

	pivot = array[high];
	i = low - 1;

	for (j = low; j <= high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			for (k = low; k <= high; k++)
			{
				if (k < high)
					printf("%d, ", array[k]);
				else
					printf("%d", array[k]);
			}
			printf("\n");
		}
	}

	swap(&array[i + 1], &array[high]);
	return (i + 1);
}
