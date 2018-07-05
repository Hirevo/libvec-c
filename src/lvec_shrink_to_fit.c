/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_shrink_to_fit
*/

#include <string.h>
#include "vec.h"

void lvec_shrink_to_fit(vec_t *this)
{
	void **arr;

	if (this == 0 || this->size == this->capacity)
		return;
	arr = realloc(this->arr, this->size * sizeof(void *));
	if (arr == 0)
		return;
	this->arr = arr;
	this->capacity = this->size;
}
