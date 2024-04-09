#ifndef ALGOS_H
#define ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>


/*typedef struct
{
	pass
} listint_t;

typedef struct
{
	pass
} skiplist_t;*/

int linear_search(int *array, size_t size, int value);

int binary_search(int *array, size_t size, int value);

int jump_search(int *array, size_t size, int value);

int interpolation_search(int *array, size_t size, int value);

int exponential_search(int *array, size_t size, int value);

int advanced_binary(int *array, size_t size, int value);

size_t min(size_t num_A, size_t num_B);

/* listint_t *jump_list(listint_t *list, size_t size, int value); */

/* skiplist_t *linear_skip(skiplist_t *list, int value); */


#endif /* ALGOS_H */
