#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Searches for value in an array using Linear search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where the value is located,
 *         or -1 if the value is not present in the array or if array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
   size_t i;

    if (array == NULL)
        return -1;

    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (int)i;
    }

    return -1;
}
