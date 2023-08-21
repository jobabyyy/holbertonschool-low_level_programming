#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/* Structure */

/**
 * struct skiplist_s - Singly linked list w/ express lane
 * @n: int
 * @index: index of node in list 
 * @next: pointer to next node in list
 * @express: pointer to next node in express lane
 *
 * Description: struct defines node in skip list data structure.
 * A linked list designed for efficient search operations.
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

/* Prototypes */

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif /* SEARCH_ALGOS */
