#include "sort.h"

/**
 * selection_sort - A function that use selection sort algorithm.
 * @array: An array to sort.
 * @size: The size of the array.
 * Return: Nothing.
 */
void selection_sort(int *array, size_t size)
{
	size_t it = 0, jp = 0, mp = 0;
	int tmp = 0;

	if (array == NULL || size == 0)
		return;

	for (; it < size - 1; it++)
	{
		mp = i;
		for (jp = it + 1; jp < size; jp++)
		{
			if (array[jp] < array[mp])
				mp = jp;
		}
		if (!(mp == i)
		{
			tmp = array[it];
			array[it] = array[mp];
			array[mp] = tmp;
			print_array(array, size);
		}
	}
}
