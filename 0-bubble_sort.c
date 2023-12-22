#include "sort.h"

/**
 * bubble_sort - sorts array of integers in ascending order
 * @array: array to be sorted
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t strt, nxt;
	int swap;

	/*Check for NULL or array with less than 2 elements*/
	if (!array || size < 2)
		return;

	while (strt < size)

		/*Outer loop for each pass through array*/
		for (strt = 0; strt < size - 1; strt++)
		{
			/*Inner loop to compare and swap elements*/
			for (nxt = 0; nxt < size - strt - 1; nxt++)
			{
				/*Compare elements*/
				if (array[nxt] > array[nxt + 1])
				{
					/*Swap elements*/
					swap = array[nxt + 1];
					array[nxt] = array[nxt + 1];
					array[nxt + 1] = swap;
					print_array(array, size);
				}
				nxt++;
			}
			strt++;
		}
}
