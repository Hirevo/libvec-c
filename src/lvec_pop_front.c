/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_pop_front
*/

#include "internal_vec.h"
#include <stdarg.h>
#include <string.h>

void *lvec_pop_front(vec_t *this)
{
	void *item = lvec_front(this);

	if (this == 0 || this->size == 0)
		return (0);
	this->size -= 1;
	memmove(this->arr, this->arr + 1, this->size * sizeof(void *));
	return (item);
}
