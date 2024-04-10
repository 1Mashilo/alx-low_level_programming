#include "search_algos.h"

/**
 * binary_search - searches for a specific value in a sorted array of integers using binary search
 * @array: pointer to the first element of the sorted integer array
 * @size: size of the sorted integer array
 * @value: target value to search for
 * Return: index of the target value if found, or -1 if not found
 */
int binary_search(int *array, size_t size, int value) {
  size_t low = 0;
  size_t high = size - 1;

  if (array == NULL || size == 0) {
    return (-1);
  }

  printf("Initial array to be searched: ");
  for (size_t i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  while (low <= high) {
    size_t mid = low + (high - low) / 2;

    printf("Searching subarray from %d to %d\n", array[low], array[high]);

    if (array[mid] == value) {
      return (mid);
    } else if (array[mid] < value) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  return (-1);
}
