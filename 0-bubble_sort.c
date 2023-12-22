#include "sort.h"

/**
 * bubble_sort - sorts array of integers in ascending order
 * @array: array to be sorted
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	/*Check for NULL or array with less than 2 elements*/
	if (array == NULL || size < 2)
		return;

	size_t i, j;
	int tmp;

	/*Outer loop for each pass through array*/
	for (i = 0; i < size - 1; i++)
	{
		/*Inner loop to compare and swap elements*/
		for (j = 0; j < size - i - 1; j++)
		{
			/*Compare elements*/
			if (array[j] > array[j + 1])
			{
				/*Swap elements*/
				tmp = array[j + 1];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		}
	}
}
