/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_with_capacity
*/

#include "vec.h"

vec_t *lvec_with_capacity(size_t capacity)
{
	vec_t *this = lvec_new();

	if (this == 0)
		return (0);
	this->arr = calloc(capacity, sizeof(void *));
	if (this->arr == 0) {
		free(this);
		return (0);
	}
	this->capacity = capacity;
	return (this);
}
