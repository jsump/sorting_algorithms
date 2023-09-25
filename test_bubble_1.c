#include "sort.h"
/**
 * print_array_test - print the array of integers
 * @array: array of integers
 * @size: number of elements in array
 */
void print_array_test(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
		printf("%d ", array[i]);
	printf("\n");
}

/**
 * test_bubble_sort - Tests the bubble sort function with various cases.
 */
void test_bubble_sort(void)
{
	int arr1[] = {5, 2, 9, 3};
	size_t size1 = sizeof(arr1) / sizeof(arr1[0]);
	printf("Original Array 1: ");
	print_array_test(arr1, size1);
	bubble_sort(arr1, size1);
	printf("Sorted Array 1: ");
	print_array_test(arr1, size1);
	printf("\n");

	int arr2[] = {7, 1, 3, 8, 5};
	size_t size2 = sizeof(arr2) / sizeof(arr2[0]);
	printf("Original Array 2: ");
	print_array_test(arr2, size2);
	bubble_sort(arr2, size2);
	printf("Sorted Array 2: ");
	print_array_test(arr2, size2);
	printf("\n");

	int arr3[] = {1, 2, 3, 4, 5};
	size_t size3 = sizeof(arr3) / sizeof(arr3[0]);
	printf("Original Array 3: ");
	print_array_test(arr3, size3);
	bubble_sort(arr3, size3);
	printf("Sorted Array 3: ");
	print_array_test(arr3, size3);
	printf("\n");

	int arr4[] = {9, 8, 7, 6, 5};
	size_t size4 = sizeof(arr4) / sizeof(arr4[0]);
	printf("Original Array 4: ");
	print_array_test(arr4, size4);
	bubble_sort(arr4, size4);
	printf("Sorted Array 4: ");
	print_array_test(arr4, size4);
	printf("\n");


	int arr5[] = {};
	size_t size5 = 0;
	printf("Original Empty Array: ");
	print_array_test(arr5, size5);
	bubble_sort(arr5, size5);
	printf("Sorted Empty Array: ");
	print_array_test(arr5, size5);
	printf("\n");

	int arr6[] = {42};
	size_t size6 = 1;
	printf("Original Single Element Array: ");
	print_array_test(arr6, size6);
	bubble_sort(arr6, size6);
	printf("Sorted Single Element Array: ");
	print_array_test(arr6, size6);
	printf("\n");

	printf("All tests completed.\n");
}

int main(void)
{
	test_bubble_sort();

	return 0;
}
