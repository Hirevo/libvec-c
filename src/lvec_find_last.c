/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_find_last
*/

#include "vec.h"

void *lvec_find_last(vec_t *this,
	bool (*predicate)(void *context, void *elem, size_t idx),
	void *context)
{
	size_t idx = this->size - 1;

	if (this == 0 || this->size == 0)
		return (0);
	while (idx && predicate(context, this->arr[idx], idx) == false)
		idx -= 1;
	if (idx || (idx == 0 && predicate(context, this->arr[0], 0) == true))
		return (this->arr[idx]);
	return (0);
}
