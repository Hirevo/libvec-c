/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_find
*/

#include "vec.h"

void *lvec_find(vec_t *this,
	bool (*predicate)(void *context, void *elem, size_t idx),
	void *context)
{
	size_t idx = 0;

	if (this == 0 || this->size == 0)
		return (0);
	while (idx < this->size &&
		predicate(context, this->arr[idx], idx) == false)
		idx += 1;
	return ((idx < this->size) ? this->arr[idx] : 0);
}
