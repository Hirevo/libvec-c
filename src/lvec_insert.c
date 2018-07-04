/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_insert
*/

#include "internal_vec.h"
#include <stdarg.h>
#include <string.h>

bool lvec_insert(vec_t *this, size_t idx, void *item)
{
	size_t last_size = this->size;

	if (this == 0 || this->size < idx)
		return (false);
	if (this->size == idx)
		return (lvec_push_back(this, 1, item) != -1);
	if ((this->size + 1) > this->capacity &&
		internal_lvec_grow(this, 1) == 0)
		return (false);
	memmove(this->arr + idx + 1, this->arr + idx,
		(last_size - idx) * sizeof(void *));
	lvec_set(this, idx, item);
	return (true);
}
