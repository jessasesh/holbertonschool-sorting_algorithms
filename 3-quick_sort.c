#include "sort.h"
/**
 * swp - swaps two elements in array
 * @firel: pointer to first element
 * @secel: pointer to second element
 */
void swp(int *firel, int *secel)
{
	int tmp = *firel;
	*firel = *secel;
	*secel = tmp;
}
/**
 * lomuto_partition - partitions array using the Lomuto scheme.
 * @array: array to sort
 * @size: size of array
 * @low: starting point
 * @high: ending point
 * Return: index of pivot after partition
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swp(&array[i], &array[j]);
			if (i != j)
				print_array(array, size);
		}
	}

	swp(&array[i + 1], &array[high]);

	if (i + 1 != high)
		print_array(array, size);

	return (i + 1);
}

/**
 * qs_recur - recursively sorts array
 * @array: array to sort
 * @low: starting point
 * @high: ending point
 * @size: size of array
 */
void qs_recur(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot_index = lomuto_partition(array, low, high, size);

		qs_recur(array, low, pivot_index - 1, size);
		qs_recur(array, pivot_index + 1, high, size);
	}
}


/**
 * quick_sort - sorts array in ascending order
 * @array: array to be sorted
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	qs_recur(array, 0, size - 1, size);
}

