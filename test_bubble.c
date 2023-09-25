#include "sort.h"
#include <assert.h>
void test_bubble_sort(void);
/**
 * test_bubble_sort - test bubble sort function
 */
void test_bubble_sort(void)
{
	int test1[] = {5, 2, 8, 1, 3};
	int expected1[] = {2, 1, 3, 5, 8};

	int test2[] = {4, 4, 3, 2, 1};
	int expected2[] = {4, 3, 2, 1, 4};

	printf("Testing bubble_sort...\n");

	printf("Test case 1:\n");
	printf("Initial array: ");
	for (size_t i = 0; i < sizeof(test1) / sizeof(test1[0]); i++)
		printf("%d ", test1[i]);
	printf("\n");

	bubble_sort(test1, sizeof(test1) / sizeof(test1[0]));

	printf("Expected array: ");
	for (size_t i = 0; i < sizeof(expected1) / sizeof(expected1[0]); i++)
		printf("%d ", expected1[i]);
	printf("\n\n");

	assert(memcmp(test1, expected1, sizeof(test1)) == 0);

	printf("Test case 2:\n");
	printf("Initial array: ");
	for (size_t i = 0; i < sizeof(test2) / sizeof(test2[0]); i++)
		printf("%d ", test2[i]);
	printf("\n");

	bubble_sort(test2, sizeof(test2) / sizeof(test2[0]));

	printf("Expected array: ");
	for (size_t i = 0; i < sizeof(expected2) / sizeof(expected2[0]); i++)
		printf("%d ", expected2[i]);
	printf("\n\n");

	assert(memcmp(test2, expected2, sizeof(test2)) == 0);
}

/**
 * main - entry point for test
 * Return: error occurred
 */
int main(void)
{
	test_bubble_sort();

	printf("All tests passed!\n");
	return 0;}

