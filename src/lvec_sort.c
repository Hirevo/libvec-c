/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_sort
*/

#include "vec.h"

bool lvec_sort_helper(
	vec_t *this, int (*predicate)(void *, size_t, void *, size_t))
{
	bool done = true;
	void *tmp;
	size_t before_last = this->size - 1;

	for (size_t idx = 0; idx < before_last; idx++)
		if (predicate(this->arr[idx], idx, this->arr[idx + 1],
			    idx + 1) > 0) {
			done = false;
			tmp = this->arr[idx];
			this->arr[idx] = this->arr[idx + 1];
			this->arr[idx + 1] = tmp;
		}
	return (done);
}

vec_t *lvec_sort(vec_t *this, int (*predicate)(void *, size_t, void *, size_t))
{
	if (this == 0 || this->size == 0)
		return (0);
	while (lvec_sort_helper(this, predicate) == false);
	return (this);
}
