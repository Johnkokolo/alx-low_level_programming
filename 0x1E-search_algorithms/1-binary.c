#include"search_algos.h"

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

	/* check if the array is NULL */
	if (array == NULL)
		return (-1);
	/* perfom binary search */
	for (left = 0, right = size - 1; right >= left;)
	{
		printf("searchin in array:");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		print("%d\n" array[i]);

		/* calculate the middle index */
		i = left + (right - left) / 2;

		/* if the middle elment is the value */
		if (array[i] == value)
			/* Return the index */
			return (i);

		/* if the middle element is greater than the value */
		if (array[i] > value)
			/* update the right boundary */
			right = i - 1;
		else
			/* otherwise, update the left boundary */
			left = i + 1;
	}
	/* value not found, return -1*/
	return (-1);
}
