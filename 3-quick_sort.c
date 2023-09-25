#include "sort.h"

void quick_sort_recursive(int *array, int low, int high);

/**
 * quick_sort - sortsan array of integers in ascending order,
 * using the quick sort algorithm.
 * @array: assray of integers
 * @size: size of array of integers
 */
void quick_sort(int *array, size_t size)
{
	int pi, k, low, high;

        if (low < high)
        {
                pi = partition(array, low, high);

                for (k = low; k <= high; k++)
                        printf("%d ", array[k]);
                printf("\n");

                quick_sort(array, low, pi - 1);
                quick_sort(array, pi + 1, high);;
        }
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
