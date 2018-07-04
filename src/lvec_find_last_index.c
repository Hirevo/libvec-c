/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_find_last_index
*/

#include "vec.h"

ssize_t lvec_find_last_index(vec_t *this,
	bool (*predicate)(void *context, void *elem, size_t idx),
	void *context)
{
	size_t idx = this->size - 1;

	if (this == 0 || this->size == 0)
		return (-1);
	while (idx && predicate(context, this->arr[idx], idx) == false)
		idx -= 1;
	if (idx || (idx == 0 && predicate(context, this->arr[0], 0) == true))
		return ((ssize_t)(idx));
	return ((ssize_t)(-1));
}
