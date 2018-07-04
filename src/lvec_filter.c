/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_filter
*/

#include "vec.h"

vec_t *lvec_filter(vec_t *this,
	bool (*predicate)(void *context, void *elem, size_t idx),
	void *context)
{
	if (this == 0 || this->size == 0)
		return (0);
	for (ssize_t idx = ((ssize_t)(this->size)) - 1; idx >= 0; idx--)
		if (predicate(context, this->arr[idx], idx) == false)
			lvec_remove(this, idx);
	return (this);
}
