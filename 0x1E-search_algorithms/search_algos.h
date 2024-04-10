#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stddef.h>

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

int linear_search(int *array, size_t size, int value);

/*
 * Function: binary_search
 * -----------------------
 * Searches for a specific value within a SORTED array using binary search
 *
 * array: Pointer to the integer array to be searched
 * size: Size of the array (number of elements)
 * value: The value to search for within the array
 *
 * Return: The index of the found element, or -1 if not found
 */
int binary_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H */
