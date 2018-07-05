/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_reserve
*/

#include "vec.h"
#include <string.h>

bool lvec_reserve(vec_t *this, size_t capacity)
{
	void **arr;

	if (this == 0 || capacity <= this->capacity)
		return (false);
	arr = calloc(capacity, sizeof(void *));
	if (arr == 0)
		return (false);
	memcpy(arr, this->arr, this->size * sizeof(void *));
	free(this->arr);
	this->arr = arr;
	this->capacity = capacity;
	return (true);
}
