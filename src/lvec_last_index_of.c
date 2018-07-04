/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_last_index_of
*/

#include "vec.h"

ssize_t lvec_last_index_of(vec_t *this, void *elem)
{
	size_t idx;

	if (this == 0 || this->size == 0)
		return (-1);
	for (idx = this->size - 1; idx && this->arr[idx] != elem; idx--);
	if (idx || (idx == 0 && this->arr[idx] == elem))
		return ((ssize_t)(idx));
	return ((ssize_t)(-1));
}
