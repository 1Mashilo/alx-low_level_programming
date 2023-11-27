#include "sort.h"

/**
 * swap_integers - Swap two integers in an array.
 * @firstInteger: The first integer to swap.
 * @secondInteger: The second integer to swap.
 */
void swap_integers(int *firstInteger, int *secondInteger) {
    int temporaryVariable;

    temporaryVariable = *firstInteger;
    *firstInteger = *secondInteger;
    *secondInteger = temporaryVariable;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @listOfIntegers: An array of integers to sort.
 * @numberOfIntegers: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *listOfIntegers, size_t numberOfIntegers) {
    size_t currentPosition, numberOfIntegersToSort;
    bool swapsMade = false;

    if (listOfIntegers == NULL || numberOfIntegers < 2) {
        return;
    }

    while (!swapsMade) {
        swapsMade = true;
        numberOfIntegersToSort = numberOfIntegers - 1;

        for (currentPosition = 0; currentPosition < numberOfIntegersToSort; currentPosition++) {
            if (listOfIntegers[currentPosition] > listOfIntegers[currentPosition + 1]) {
                swap_integers(&listOfIntegers[currentPosition], &listOfIntegers[currentPosition + 1]);
                print_array(listOfIntegers, numberOfIntegers);
                swapsMade = false;
            }
        }

        numberOfIntegersToSort--;
    }
}

