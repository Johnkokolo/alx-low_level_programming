#include "search_algos.h"

/**
 * linear_search - searchs for a value in array
 * of integers using linear seach.
 * @array: A pointer to the first element of the array to search.
 * size: The number of elements in the array.
 * value: The value to search for.
 *
 * Return: if the value is not pressent or the array is NULL, -1.
 * otherwise, the first index where the value is locates
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	
	/* check if the array is NULL */
	if (array == NULL)
		return (-1);
	
	/* iterate over each element of the array */
	for (i = 0; i < size; i++)
	{
		/* Print the value being checke */
		printf("value checked array [%ld] -[%d]\n", i, array[i]);
		
		/* if the value is found */
		if (array [i] == value)
			
			/* Return the index of the value */
			return (i);
	}
	
	/* value not found, return -1 */
	return (-1);
}
