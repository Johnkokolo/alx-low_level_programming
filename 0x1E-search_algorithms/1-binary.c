#include "search_algos.h"

/**
 * binary_search - searches for a value in sorted array
 * of integers using binary search.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: if the value is not present or the array is NULL, -1.
 * otherwise, the index where the value is located.
 */

int binary_search(int *array, size_t size, int value);
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);
	for (left = 0, right = size - 1; right >= left;)
	{
		printf("searchin in array:");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		print("%d\n" array[i]);

		i = left + (right - left) / 2;

		if (array[i] == value)
			return (i);

		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}
