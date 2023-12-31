#include "sort.h"

void swap(int *a, int *b);

/**
 * bubble_sort - sorts an array of integers in ascending order.
 * @array: array of integers to be sorted.
 * @size: number of iteration
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, k;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
			}

			for (k = 0; k < size; k++)
			{
				printf("%d ", array[k]);
			}
			printf("\n");
		}
	}
}

/**
 * swap - swap the two integers making the smaller one first.
 * @a: integer in first spot
 * @b: integer in second spot
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
