/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_clone
*/

#include <string.h>
#include "vec.h"

vec_t *lvec_clone(vec_t *v)
{
	vec_t *this;

	if (v == 0)
		return (0);
	this = lvec_new();
	if (this == 0)
		return (0);
	this->arr = calloc(v->size, sizeof(void *));
	if (this->arr == 0) {
		free(this);
		return (0);
	}
	memcpy(this->arr, v->arr, v->size * sizeof(void *));
	this->capacity = v->size;
	this->size = v->size;
	return (this);
}
