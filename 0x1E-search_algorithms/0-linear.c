#include "search_algos.h"

/**
 * linear_search - Search for a value in an array using Linear Search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where the value is located, or -1 if not found.
 */
int linear_search(int *array, size_t size, int value) {

    if (array == NULL || size == 0) {
        printf("Value is not present in array (array is NULL)\n");
        return (-1);
    }

    for (size_t i = 0; i < size; i++) {
        printf("Comparing %d with %d\n", array[i], value);
        if (array[i] == value) {
            
            return (i);
        }
    }
    printf("Value is not present in array\n");
    return (-1);
}
