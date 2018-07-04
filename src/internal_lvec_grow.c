/*
** EPITECH PROJECT, 2018
** vec
** File description:
** internal_lvec_grow
*/

#include <string.h>
#include "internal_vec.h"

static size_t compute_capacity(size_t capacity)
{
	capacity -= 1;
	capacity |= capacity >> 1;
	capacity |= capacity >> 2;
	capacity |= capacity >> 4;
	capacity |= capacity >> 8;
	capacity |= capacity >> 16;
	capacity |= capacity >> 32;
	return (capacity + 1);
}

vec_t *internal_lvec_grow(vec_t *this, size_t count)
{
	size_t total_size = this->size + count;
	size_t capacity = compute_capacity(total_size);
	void **arr = calloc(capacity, sizeof(void *));

	if (arr == 0)
		return (0);
	memcpy(arr, this->arr, this->size * sizeof(void *));
	free(this->arr);
	this->arr = arr;
	this->capacity = capacity;
	return (this);
}
