/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_reduce
*/

#include "vec.h"

void *lvec_reduce(vec_t *this,
	void *(*func)(void *context, void *acc, void *elem, size_t idx),
	void *context, void *acc)
{
	if (this == 0)
		return (acc);
	for (size_t idx = 0; idx < this->size; idx++)
		acc = func(context, acc, this->arr[idx], idx);
	return (acc);
}
