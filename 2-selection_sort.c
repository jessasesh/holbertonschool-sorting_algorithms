#include "sort.h"

/**
 * selection_sort - A function that use selection sort algorithm.
 * @array: An array to sort.
 * @size: The size of the array.
 * Return: Nothing.
 */
void selection_sort(int *array, size_t size)
{
	int ind, strt, pos, tmp;

	if (!array || size < 2)
		return;

	while (strt < (int)size)
	{
		pos = strt;
		ind = strt + 1;
		while (ind < (int)size)
		{
			if (array[ind] < array[pos])
				pos = ind;
			ind++;
		}
		if (pos != strt)
		{
			tmp = array[strt];
			array[strt] = array[pos];
			array[pos] = tmp;
			print_array(array, size);
		}
		strt++;
	}
}
