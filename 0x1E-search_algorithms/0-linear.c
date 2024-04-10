#include "search_algos.h"

/*
 * Function: linear_search
 * -----------------------
 * Searches for a specific value within a given array using linear search
 *
 * array: Pointer to the integer array to be searched
 * size: Size of the array (number of elements)
 * value: The value to search for within the array
 *
 * Return: The index of the found element, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array == NULL)
        return (-1);

    for (i = 0; i < size; i++) {
        if (array[i] == value) {
            printf("Value checked array[%lu] = [%d]\n", i, array[i]);
            return (i);
        }
    }

    return (-1);
}
