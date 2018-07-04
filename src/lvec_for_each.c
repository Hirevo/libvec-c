/*
** EPITECH PROJECT, 2018
** vec
** File description:
** lvec_for_each
*/

#include "vec.h"

void lvec_for_each(vec_t *this,
	void (*func)(void *context, void *elem, size_t idx), void *context)
{
	if (this == 0 || this->size == 0)
		return;
	for (size_t idx = 0; idx < this->size; idx++)
		func(context, this->arr[idx], idx);
}
